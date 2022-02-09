#include "Library.h"

Library::Library() {

}


void Library::loan(Book &book) { 
    book.loan();
}


void Library::retrieve(Book &book) { 
    book.retrieve();
}