#include "Book.h"

Book::Book(int bookId, std::string author, 
            std::string bookName, Status bookStatus) : 
            bookId(bookId), author(author), bookName(bookName),
            bookStatus(bookStatus) {
}

int Book::getBookId() {
   return bookId;
}

void Book::setBookId(int bookId) {
    this->bookId = bookId;
}

std::string Book::getBookName() {
    return bookName;
}

void Book::setBookName(std::string bookName) {
    this->bookName = bookName;
}

std::string Book::getAuthor() {
    return author;
}

void Book::setAuthor(std::string author) {
    this->author = author;
}

Book::Status Book::getBookStatus() {
    return bookStatus;
}

void Book::setBookStatus(Status status) {
    this->bookStatus = status;
}

bool Book::isAvailable() {
    if(this->bookStatus == Status::Available) {
        return true;
    }
    else {
        return false;
    }
}