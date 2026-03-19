#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Library.h"

class Book
{
private:
    std::string Title;
    std::string Author;
    int PubYear;
public:
    Book(const std::string title = "", const std::string author = "", const int pubyear = 0)
        : Title(title), Author(author), PubYear(pubyear) {}
    void PrintBook() const
    {   
        std::fstream file("lib.txt");
        if (file.is_open())
        {
            file << "===========================" << std::endl;
            file << "Book: " << Title << "\n" << "Author: " << Author << "\n" << "Published Year: " << PubYear << std::endl;
            file << "===========================" << std::endl;
            file.close();
        }
        else
            return;
    }

    void PrintBookFromFile(const std::string& filename)
    {
        std::ifstream file(filename);
        if (file.is_open())
        {
            std::string line;
            while (std::getline(file, line))
            {
                std::cout << line << std::endl;
            }
            file.close();
        }
        else
            return;
    }

    void InputBook()
    {
        std::cout << "Input title of book: ";
        std::cin >> Title;
        std::cout << "Input author of book: ";
        std::cin >> Author;
        std::cout << "Input published year of book: ";
        try
        {
            std::cin >> PubYear;
            if (std::cin.fail() || PubYear < 0)
                throw std::runtime_error("Invalid year");
        }
        catch (...)
        {
            std::cout << "Error: Year must be a positive number." << std::endl;
            PubYear = 0;
            return;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    }
};

