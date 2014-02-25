#ifndef STUDENT
#define STUDENT

#include <string>

class Student
{
    private:
        double library_fines;
    public:
        Student();
        Student(const Student& otherStudent);
        Student(std::string student_name);
        std::string name;
        double tuition_fee;
        virtual double Total_Bill();
        void SetLibraryFine(double fine);
        double GetLibraryFine() const;
};

#endif 
