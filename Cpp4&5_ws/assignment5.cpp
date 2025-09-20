#include <iostream>
#include <vector>
#include <windows.h>
#include <limits>

class Book
{
    private:
        std::string title;
        std::string author;
        int year;
    public:
        Book(std::string title = "Null", std::string author = "Null", int year = 0)
        {
            this->title = title;
            this->author = author;
            this->year = year;
        }
        std::string getTitle() const { return title; }
        std::string getAuthor() const { return author; }
        int getYear() const { return year; }
        void displayInfo() const
        {
            std::cout << "Title: [" << title << "], Author: [" << author << "], Year: [" <<
            year<< "]" << std::endl;
        }
};

class LibraryCatalog
{
    private:
        std::vector<Book> books;
    public:
        void addBook(std::string title, std::string author, int year)
        {
            books.push_back(Book(title ,author, year));
            std::cout << "Book add successfully\n";
        }
        void searchByAuthor(std::string author)
        {
            bool flag = true;
            std::cout << "Books by: " << author << std::endl;
            for (const auto &i : books)
            {
                if (i.getAuthor() == author)
                {
                    std::cout << i.getTitle() << ", " << i.getAuthor() << ", " 
                    << i.getYear() << std::endl;
                    flag = false; 
                } 
            }
            if (flag)
                std::cout << "No books for " << author << std::endl;  
        }
        void displayCataloge() const
        {
            for (const auto &i : books)
            {
                i.displayInfo();
            }
        }
};

void add(std::vector<std::string>& bookData);
void search(std::vector<std::string>& bookData);

LibraryCatalog cataloge;

int main() {
    int choice = 0;
    std::vector<std::string> bookData(3);
    while (1)
    {
        std::cout << "Menu: \n1.    Add a book\n2.    search by author\n3.    Display cataloge\n4.    Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        if (choice == 1)
            add(bookData);
        
        else if (choice == 2)
            search(bookData);

        else if (choice == 3)
        {
            cataloge.displayCataloge();
            Sleep(3000);
        }
        else if (choice == 4)
            return 0;
        
        else
        {
            std::cout << "Wront choice, please try again!\n";
            Sleep(3000);
        }
    }
}

void add(std::vector<std::string>& bookData)
{
    std::cout << "Enter the title of the book: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, bookData[0]);
    std::cout << "Enter the author of the book: ";
    std::getline(std::cin, bookData[1]);
    std::cout << "Enter the year of the publication: ";
    std::cin >> bookData[2];
    cataloge.addBook(bookData[0], bookData[1], stoi(bookData[2]));
    Sleep(3000);
}
void search(std::vector<std::string>& bookData)
{
    std::cout << "Enter the author's name: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, bookData[0]);
    cataloge.searchByAuthor(bookData[0]);
    Sleep(3000);
}