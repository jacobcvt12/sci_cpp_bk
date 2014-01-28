#include <iostream>
#include "copy_h.hpp"

int main()
{
    Book* p_book_i_am_reading = new Book;

    (*p_book_i_am_reading).author = "Philip Pullman";
    p_book_i_am_reading->title = "Lyra's Oxford";

    std::cout << "The publisher of " << p_book_i_am_reading->title << " is " << p_book_i_am_reading->publisher << "\n";

    return 0;
}
