#include <cassert>
#include "Book.hpp"

void Book::SetYearOfPublication(int year)
{
    assert ((year > 1440) && (year < 2020));
    mYearOfPublication = year;
}

int Book::GetYearOfPublication() const
{
    return mYearOfPublication;
}
