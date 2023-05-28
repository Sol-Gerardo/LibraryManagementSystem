#ifndef _USER_
#define _USER_

#include <iostream>
#include <string>
#include <list>
#include "Book.h"

class User {
private:
    int userId;
    std::string userName;
    std::list<Book> booksBorrowed;

public:
    User(int userId = -1, std::string userName = "",
            std::list<Book>* booksBorrowed = nullptr);
    int getUserId();
    bool setUserId(int userId);
    std::string getUserName();
    bool setUserName(std::string userName);
    std::list<Book> getBooksBorrowed();
    bool setBooksBorrowed(Book aBook);
};

#endif