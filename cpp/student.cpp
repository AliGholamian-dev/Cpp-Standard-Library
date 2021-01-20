#include "student.h"

/*
Student: Student Class Constructor
Input: _id -> Student's ID, _avg -> Student's Average, _units-> Student's Units
Output: Void
*/
Student::Student(long _id, double _avg, size_t _units)
    : id { _id }
    , avg { _avg }
    , units { _units }
{
}

/*
operator<<:  Output Student's ID
Input: os -> std::ostream object, st -> Student Object
Output: os -> an stream containing Student's ID
*/
std::ostream& operator<<(std::ostream& os, const Student& st)
{
    os << st.id;
    return os;
}