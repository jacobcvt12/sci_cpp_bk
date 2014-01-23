#ifndef BOOKHEADERDEF
#define BOOKHEADERDEF

#include <string>

class Book
{
    public:
        Book();
        Book(const Book& otherBook);
        Book(std::string bookTitle);
        std::string author, title, publisher, format;
        int price; //Given in pence
        void SetYearOfPublication(int year);
        int GetYearOfPublication() const;
    private:
        int mYearOfPublication;
}; 

#endif
