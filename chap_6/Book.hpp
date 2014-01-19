//header file for book class
#include <string>

class Book
{
    public:
        std::string author, title, publisher, format;
        int price; //Given in pence
        int yearOfPublication;
}; //Note that the class ends with ;
