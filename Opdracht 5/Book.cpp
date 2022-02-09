#include "Book.h"

Book::Book() {
    loaned = false;
}


void Book::loan() {
    loaned = true;
}

void Book::retrieve() {
    loaned = false;
}

void Book::isLoaned() {
    cout << "Book is loaned: " << loaned << endl;
}