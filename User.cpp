#include "User.h"

User::User(int userId, std::string userName, 
            const std::list<Book>& booksBorrowed) {
    this->userId = userId;
    this->userName = userName;
    this->booksBorrowed = booksBorrowed;
}

int User::getUserId() {
    return userId;
}

void User::setUserId(int userId) {
    this->userId = userId;
}


std::string User::getUserName() {
    return userName;
}

void User::setUserName(std::string userName) {
    this->userName = userName;
}

std::list<Book> User::getBooksBorrowed() {
    return booksBorrowed;
}   

void User::addBooksBorrowed(Book aBook) {
    this->booksBorrowed.push_back(aBook);
}