#ifndef STUDENT_H
#define STUDENT_H

#include <cstddef>
#include <iostream>

class Student {
public:
    long id {}; // Student's ID
    double avg {}; // Student's Average
    size_t units { 50 }; // Student's Units
    Student() = default; // Default Connstructor
    Student(long _id, double _avg, size_t _units);
    // Output Student's ID
    friend std::ostream& operator<<(std::ostream& os, const Student& st);
};

#endif