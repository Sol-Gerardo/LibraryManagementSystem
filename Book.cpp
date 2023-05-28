#include "Book.h"

Book::Book(int bookId, std::string author, 
            std::string bookName, std::string bookStatus) {
    this->bookId = bookId;
    this->author = author;
    this->bookName = bookName;
    this->bookStatus = bookStatus;

}

int Book::getBookId() {
   return bookId;
}

bool Book::setBookId(int bookId) {
    bool flag = false;
    
    try {
        this->bookId = bookId;
        flag = true;
    }catch(std::exception e) {
        std::cout << "ERROR! Book ID was not updated. " << std::endl;
    }

    return flag;
}

std::string Book::getAuthor() {
    return author;
}

bool Book::setAuthor(std::string author) {
    bool flag = false;

    try {
        this->author = author;
        flag = true;
    }catch(std::exception e) {
        std::cout << "Error! Author was not updated." << std::endl;
    }

    return flag;
}

std::string Book::getBookStatus() {
    return bookStatus;
}

bool Book::setBookStatus(std::string bookStatus) {
    bool flag = false;

    try {
        this->bookStatus = bookStatus;
        flag = true;
    }catch(std::exception e) {
        std::cout << "ERROR. Book status was not updated." << std::endl;
    }

    return flag;
}