#include "const_h.hpp"
#include <cassert>

// Override the default constructor
Book::Book()
{
    author = "unspecified";
}

void Book::SetYearOfPublication(int year)
{
    assert((year>1440) && (year < 2020));
    mYearOfPublication = year;
}

int Book::GetYearOfPublication() const
{
    return mYearOfPublication;
}
