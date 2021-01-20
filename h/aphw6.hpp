/*
convert: Convert a container to wanted type
Input: input_container -> Container to Convert
Output: Converted Container
*/
template <class OutputType, class InputType>
OutputType convert(const InputType& input_container)
{
    // Make a container of wanted type same size as current container
    OutputType converted_container(input_container.size());
    // Copy current container items to new container
    std::copy(input_container.cbegin(), input_container.cend(), converted_container.begin());
    return converted_container;
}

/*
findRank: Sort Students based on their rank and return wanted rank Student object
Input: input_container -> Container of Students, n -> Wanted rank
Output: Wanted rank Student object
*/
template <class InputType>
Student findRank(const InputType& input_container, int n)
{
    // Convert any type to Vector so we can use std::sort
    std::vector<Student> temp = convert<std::vector<Student>>(input_container);
    auto lambda { [](const Student& first_st, const Student& second_st) { return first_st.avg > second_st.avg; } };
    std::sort(temp.begin(), temp.end(), lambda);
    return temp[n - 1];
}

/*
getRanks: Sort Students based on their rank and return sorted container
Input: input_container -> Container of Students
Output: Sorted Container
*/
template <class T>
T getRanks(const T& input_container)
{
    // Convert any type to Vector so we can use std::sort
    std::vector<Student> temp = { convert<std::vector<Student>>(input_container) };
    auto lambda { [](const Student& first_st, const Student& second_st) { return first_st.avg > second_st.avg; } };
    std::sort(temp.begin(), temp.end(), lambda);
    // Convert back to the input type
    T output_container = convert<T>(temp);
    return output_container;
}

/*
getInterns: Sort Students based on their units and return sorted container
Input: input_container -> Container of Students
Output: Sorted Container
*/
template <class T>
T getInterns(const T& input_container)
{
    // Convert any type to Vector so we can use std::sort
    std::vector<Student> temp = convert<std::vector<Student>>(input_container);
    auto lambda { [](const Student& first_st, const Student& second_st) { return first_st.units > second_st.units; } };
    std::sort(temp.begin(), temp.end(), lambda);
    // Convert back to the input type
    T output_container = convert<T>(temp);
    return output_container;
}

/*
show: Show All students' IDs'
Input: input_container -> Container of Student objects
Output: void
*/
template <class T>
void show(const T& input_container)
{
    // Using std::copy to iterate through container and print object to output
    // Uses Student's <<(operator)
    std::copy(input_container.cbegin(), input_container.cend(), std::ostream_iterator<Student>(std::cout, " "));
    std::cout << std::endl;
}