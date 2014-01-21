#include <iostream>
#include "Book.hpp"

int main()
{
    Book promotion_book;
    promotion_book.author = "Iris Murdoch";
    promotion_book.title = "The sea. the sea";
    promotion_book.price = 299;
    promotion_book.SetYearOfPublication(1978);

    return 0;
}
