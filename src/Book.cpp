#include "../include/Book.h"

// Constructor for Book class
Book::Book(const std::string &code, const std::string &title, const std::string &author, int pages) : LibraryItem(code, title), author(author), pages(pages) {}

// Destructor for Book class
Book::~Book() {}

// Virtual Method to print book information
void Book::printInfo() const
{

    std::cout << "Code : " << code << " Book : " << title << std::endl;
    std::cout << " Author: : " << author << "Pages: " << pages << std::endl;
    std::cout << "------------------------" << std::endl;
}
