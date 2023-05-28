#ifndef _BOOK_
#define _BOOK_

#include <string>
#include <iostream>

class Book {
public:
    enum Status{ Available, Borrowed, Reserved };

private:
    int bookId;
    std::string bookName;
    std::string author;
    Status bookStatus;
public:
    Book(int id = -1, std::string bookName = "", 
        std::string author = "", Status bookStatus = Available);
    int getBookId();
    void setBookId(int bookId);
    std::string getBookName();
    void setBookName(std::string bookName);
    std::string getAuthor();
    void setAuthor(std::string author);
    Status getBookStatus();
    void setBookStatus(Status status);
    bool isAvailable();
};

#endif