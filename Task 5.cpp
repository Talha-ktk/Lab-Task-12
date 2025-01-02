#include <iostream>
#include <string>
using namespace std;

const int MAX_BOOKS = 100;

struct Book {
    string title;
    string author;
    bool isIssued;
};

Book library[MAX_BOOKS];
int bookCount = 0;

void addBook() {
    if (bookCount < MAX_BOOKS) {
        Book *newBook = &library[bookCount];
        cout << "Enter book title: ";
        cin.ignore();
        getline(cin, newBook->title);
        cout << "Enter book author: ";
        getline(cin, newBook->author);
        newBook->isIssued = false;
        bookCount++;
        cout << "Book added successfully.\n";
    } else {
        cout << "Library is full. Cannot add more books.\n";
    }
}

void viewBooks() {
    if (bookCount == 0) {
        cout << "No books in the library.\n";
        return;
    }
    for (int i = 0; i < bookCount; i++) {
        Book *book = &library[i];
        cout << i + 1 << ". " << book->title << " by " << book->author;
        if (book->isIssued) {
            cout << " [Issued]";
        }
        cout << endl;
    }
}

void searchBook() {
    string searchTitle;
    cout << "Enter the title of the book to search: ";
    cin.ignore();
    getline(cin, searchTitle);

    for (int i = 0; i < bookCount; i++) {
        Book *book = &library[i];
        if (book->title == searchTitle) {
            cout << "Book found: " << book->title << " by " << book->author;
            if (book->isIssued) {
                cout << " [Issued]";
            }
            cout << endl;
            return;
        }
    }
    cout << "Book not found.\n";
}

void issueBook() {
    string issueTitle;
    cout << "Enter the title of the book to issue: ";
    cin.ignore();
    getline(cin, issueTitle);

    for (int i = 0; i < bookCount; i++) {
        Book *book = &library[i];
        if (book->title == issueTitle) {
            if (book->isIssued) {
                cout << "Book is already issued.\n";
            } else {
                book->isIssued = true;
                cout << "Book issued successfully.\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}

void returnBook() {
    string returnTitle;
    cout << "Enter the title of the book to return: ";
    cin.ignore();
    getline(cin, returnTitle);

    for (int i = 0; i < bookCount; i++) {
        Book *book = &library[i];
        if (book->title == returnTitle) {
            if (book->isIssued) {
                book->isIssued = false;
                cout << "Book returned successfully.\n";
            } else {
                cout << "Book was not issued.\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. View All Books\n";
        cout << "3. Search Book by Title\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                viewBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                issueBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
