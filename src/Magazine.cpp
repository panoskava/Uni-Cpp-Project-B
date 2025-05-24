#include "../include/Magazine.h"
#include <iostream>
#include <string>

// Constructor for Magazine class
Magazine::Magazine(const std::string &code, const std::string &title, int issueNumber, int month) : LibraryItem(code, title), issueNumber(issueNumber), month(month) {}

// Destructor for Magazine class
Magazine::~Magazine() {}

// Virtual Method to print magazine information
void Magazine::printInfo() const
{
    std::cout << "Code : " << code << "Magazine : " << title << std::endl;
    std::cout << " Issue Number: : " << issueNumber << "Month: " << month << std::endl;
    std::cout << "------------------------" << std::endl;
}
