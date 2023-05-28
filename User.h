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
            const std::list<Book>& booksBorrowed = {});
    int getUserId();
    void setUserId(int userId);
    std::string getUserName();
    void setUserName(std::string userName);
    std::list<Book> getBooksBorrowed();
    void addBooksBorrowed(Book aBook);
};

#endif