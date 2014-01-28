#include <iostream>
#include "copy_h.hpp"

int main()
{
    Book goodRead;

    goodRead.author = "C S Lewis";
    goodRead.title = "The Silver Chair";
    goodRead.publisher = "Geoffrey Bles";
    goodRead.price = 699;
    goodRead.format = "paperback";
    goodRead.SetYearOfPublication(1953);

    Book another_book(goodRead);
    Book an_extra_book("The Magician's Nephew");

    std::cout << "Title of another_book is " << another_book.title << "\nTitle of an_extra_book is " << an_extra_book.title \
        << " and the format is " << an_extra_book.format << "\n";

    return 0;
}
