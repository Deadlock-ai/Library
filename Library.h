#pragma once
#include <iostream>
#include "Book.h"
#include <vector>
#include <string>
class Library
{
private:
    std::vector<Book> books;
public: 
    void AddBook(const Book& book)
    {
        books.push_back(book);
    }
    void printBooks()
    {
        if (books.empty()) 
        {
            std::cout << "Library is empty." << std::endl;
            return;
        }
        for (size_t i = 0; i < books.size(); i++)
        {
            std::cout << i+1 << ". ";
            books[i].PrintBook();
        }
    }
};

