#ifndef MAGAZINE_H
#define MAGAZINE_H
#include <iostream>
#include <string>
#include "LibraryItem.h"

class Magazine : public LibraryItem
{
private:
    int issueNumber;
    int month;

public:
    // Constructor declaration
    Magazine(const std::string &code, const std::string &title, int issueNumber, int month);
    // Destructor
    ~Magazine();
    // Method declarations
    void printInfo() const override;
};

#endif