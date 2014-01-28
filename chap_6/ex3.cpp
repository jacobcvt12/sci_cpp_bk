#include "ex3.hpp"

ExampleClass::ExampleClass(double member1, double member2)
{
    mMemberVariable1 = member1;
    mMemberVariable2 = member2;
}

//GetMinimum is a member method

double ExampleClass::GetMinimum() const
{
    if (mMemberVariable1 < mMemberVariable2)
    {
        return mMemberVariable1;
    }

    else
    {
        return mMemberVariable2;
    }
}

//GetMaximum is a friend function

double GetMaximum(const ExampleClass& egClass)
{
    if (egClass.mMemberVariable1 > egClass.mMemberVariable2)
    {
        return egClass.mMemberVariable1;
    }

    else
    {
        return egClass.mMemberVariable2;
    }
}
