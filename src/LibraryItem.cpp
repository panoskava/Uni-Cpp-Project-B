#include "../include/LibraryItem.h"
#include <iostream>
#include <string>
#include <vector>

// Constructor implementation
LibraryItem::LibraryItem(const std::string &code, const std::string &title)
    : code(code), title(title)
{
}

// Method implementation
void LibraryItem::show() const
{
    std::cout << "Code: " << code << ", Title: " << title << std::endl;
}