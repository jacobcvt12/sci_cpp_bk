#include "copy_h.hpp"
#include <cassert>

// Override the default constructor
Book::Book()
{
    author = "unspecified";
}

Book::Book(const Book& otherBook)
{
    author = otherBook.author;
    title = otherBook.title;
    publisher = otherBook.publisher;
    format = otherBook.format;
    price = otherBook.price;
    mYearOfPublication = otherBook.GetYearOfPublication();
}

Book::Book(std::string bookTitle)
{
    title = bookTitle;
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
