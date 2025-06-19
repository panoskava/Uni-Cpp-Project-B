#include <iostream>
#include <vector>

// Include headers for each class
#include "include/LibraryItem.h"
#include "include/Magazine.h"
#include "include/Book.h"

int main()
{
    std::vector<LibraryItem *> item;

    // Add LibraryItem objects to the vector
    item.push_back(new Magazine("j001", "Tech Today", 5, 3));
    item.push_back(new Book("B031", "C++ Programming", "Bjarne Stroustrup", 2013));

    // Print information for each item in the vector
    for (LibraryItem *libItem : item)
    {
        libItem->printInfo();
    }

    std::cout << "------------------------" << std::endl;

    // Αλλαγη για εξεταση
    int minPages = 100; // Minimum number of pages to filter books
    std::cout << "\nDisplaying books with more than " << minPages << " pages:" << std::endl;
    for (LibraryItem *libItem : item)
    {

        if (libItem->getPages() > minPages)
        {
            libItem->printInfo();
        }
    }

    // Delete created items
    for (LibraryItem *libItem : item)
    {
        delete libItem;
    }
}