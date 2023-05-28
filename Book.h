#ifndef _BOOK_
#define _BOOK_

#include <string>
#include <iostream>

class Book {
private:
    int bookId;
    std::string bookName;
    std::string author;
    std::string bookStatus;

public:
    Book(int id = -1, std::string bookName = "", 
        std::string author = "", std::string bookStatus = "");
    int getBookId();
    bool setBookId(int bookId);
    std::string getAuthor();
    bool setAuthor(std::string author);
    std::string getBookStatus();
    bool setBookStatus(std::string bookStatus);
};

#endif