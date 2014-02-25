#include "student.hpp"
#include <cassert>

// Override default constructor
Student::Student()
{
    name = "unspecified";
    library_fines = 0.0;
    tuition_fee = 0.0;
}

Student::Student(const Student& otherStudent)
{
    name = otherStudent.name;
    library_fines = otherStudent.library_fines;
    tuition_fee = otherStudent.tuition_fee;
}

Student::Student(std::string student_name)
{
    name = student_name;
}

double Student::Total_Bill()
{
    return GetLibraryFine() + tuition_fee;
}

void Student::SetLibraryFine(double fine)
{
    assert(fine > 0.0);
    library_fines = fine;
}

double Student::GetLibraryFine() const
{
    return library_fines;
}
