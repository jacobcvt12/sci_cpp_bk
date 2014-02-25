#include <iostream>

class AbstractPerson
{
    public:
        virtual void Print(){std::cerr << "Never instantiate\n";}
};

class Mother : AbstractPerson
{
    public:
        virtual void Print(){std::cout << "Mother\n";}
};

class Daughter : Mother
{
    public:
        void Print(){std::cout << "Daughter\n";}
};

int main()
{
    AbstractPerson* p_mother = new Mother;
    AbstractPerson* p_daughter = new Daughter;
    p_mother->Print();
    p_daughter->Print();
    delete p_mother;
    delete p_daughter;
}
