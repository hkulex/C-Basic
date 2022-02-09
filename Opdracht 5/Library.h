#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include "Book.h"

using namespace std;


class Library {    
    public: 
        Library();

        void loan(Book &book);
        void retrieve(Book &book);
};

#endif