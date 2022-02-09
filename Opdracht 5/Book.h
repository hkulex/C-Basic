#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std;


class Book {
    protected:
        bool loaned;
    
    public: 
        Book();

        void loan();
        void retrieve();
        void isLoaned();
};

#endif