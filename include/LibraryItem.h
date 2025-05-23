#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <iostream>
#include <string>
#include <vector>

class LibraryItem
{
protected:
    std::string code;
    std::string title;

public:
    // Constructor declaration
    LibraryItem(const std::string &code, const std::string &title);
    virtual ~LibraryItem() = default;

    // Method declarations
    void show() const;
    virtual void printInfo() const = 0;
};

#endif