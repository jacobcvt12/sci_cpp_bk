#ifndef GRADSTUDENT
#define GRADSTUDENT

#include "student.hpp"

class GradStudent: public Student
{
    public:
        bool full_time;
        double Total_Bill();
};

#endif
