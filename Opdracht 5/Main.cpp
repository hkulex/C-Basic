#include <iostream>
#include "Library.h"
#include "Book.h"



int main() { 
    Library *library = new Library();
    Book *book = new Book();

    library->loan(*book);

    book->isLoaned();

    library->retrieve(*book);

    delete library;
    delete book;

    return 0;
}