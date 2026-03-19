#pragma once
#include <iostream>
#include <vector>
#include <string>

class Book
{
private:
    std::string Title;
    std::string Author;
    int PubYear;
public:
    Book(std::string title = "", std::string author = "", int pubyear = 0)
        : Title(title), Author(author), PubYear(pubyear) {}
    void PrintBook()
    {   
        std::cout << "===========================" << std::endl;
        std::cout << "Book: " << Title << "\n" << "Author: " << Author << "\n" << "Published Year: " << PubYear << std::endl;
        std::cout << "===========================" << std::endl;
    }
    void InputBook()
    {
        std::cout << "Input title of book: ";
        std::cin >> Title;
        std::cout << "Input author of book: ";
        std::cin >> Author;
        std::cout << "Input published year of book: ";
        std::cin >> PubYear;
    }
};

