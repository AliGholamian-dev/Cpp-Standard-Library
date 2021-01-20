#ifndef APHW6_H
#define APHW6_H

#include "student.h"
#include <algorithm>
#include <deque>
#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <typeinfo>
#include <vector>

// Convert a container to wanted type
template <class OutputType, class InputType>
OutputType convert(const InputType& input_container);

// Sort Students based on their rank and return wanted rank
template <class InputType>
Student findRank(const InputType& input_container, int n);

// Sort Students based on their rank and return sorted container
template <class T>
T getRanks(const T& input_container);

// Sort Students based on their units and return sorted container
template <class T>
T getInterns(const T& input_container);

//Show All students' IDs'
template <class T>
void show(const T& input_container);

#include "aphw6.hpp"
#endif