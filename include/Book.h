#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <vector>
#include "LibraryItem.h"

class Book : public LibraryItem
{
private:
    std::string author;
    int pages;

public:
    // Constructor declaration
    Book(const std::string &code, const std::string &title, const std::string &author, int pages);
    // Destructor
    ~Book();
    // Method declarations
    void printInfo() const override;

    static int totalpages; // προσθικη για εξαταση
};

#endif