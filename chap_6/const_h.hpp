#ifndef BOOKHEADERDEF
#define BOOKHEADERDEF

#include <string>

class Book
{
    public:
        Book();
        std::string author, title, publisher, format;
        int price;
        void SetYearOfPublication(int year);
        int GetYearOfPublication() const;
    private:
        int mYearOfPublication;
};

#endif
