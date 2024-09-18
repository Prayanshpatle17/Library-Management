/* LIBRARY MANAGEMENT SYSTEM */

#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool available;

public:
    // Constructor
    // Book(std::string title, std::string author, std::string isbn, bool available = true)
    //     : title(title), author(author), isbn(isbn), available(available) {}
     Book(std::string title, std::string author, std::string isbn, bool available = true)
     : title(title), author(author), isbn(isbn), available(available) {}

    // Setters
    void setTitle(std::string title) {
        title = title;
    }

    void setAuthor(std::string author) {
        author = author;
    }

    void setISBN(std::string isbn) {
        this->isbn = isbn;
    }

    void setAvailable(bool available) {
        this->available = available;
    }

    // Getters
    std::string getTitle() const {
        return title;
    }

    std::string getAuthor() const {
        return author;
    }

    std::string getISBN() const {
        return isbn;
    }

    bool getAvailable() const {
        return available;
    }

    // Other member functions
    void borrowBook() {
        if (available) {
            available = false;
            std::cout << title << " has been borrowed." << std::endl;
        } else {
            std::cout << "Sorry, " << title << " is not available for borrowing." << std::endl;
        }
    }

    void returnBook() {
        if (!available) {
            available = true;
            std::cout << title << " has been returned." << std::endl;
        } else {
            std::cout << title << " is already available." << std::endl;
        }
    }
};

int main() {
    // Example usage
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald", "978-0743273565");
    std::cout << "Title: " << myBook.getTitle() << std::endl;
    std::cout << "Author: " << myBook.getAuthor() << std::endl;
    std::cout << "ISBN: " << myBook.getISBN() << std::endl;
    std::cout << "Available: " << (myBook.getAvailable() ? "Yes" : "No") << std::endl;

    myBook.borrowBook();
    myBook.returnBook();

    return 0;
}
