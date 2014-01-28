#include <iostream>
#include "const_h.hpp"

int main()
{
    Book my_book;
    std::cout << "The author is " << my_book.author << " and the title is " << my_book.title << std::endl;

    return 0;
}
