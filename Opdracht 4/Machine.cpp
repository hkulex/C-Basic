#include <iostream>
#include "Machine.h"

Machine::Machine() {
    
}


void Machine::insert(Coin coin) { 
    cout << "You inserted " << coin.getName() << ".\r\n";

    if (coin.isSpecial()) {
        cout << "You can get all types of coffee!\r\n";
    } else {
        if (coin.getValue() >= 1) {
            cout << "You are eligible for a Supreme Latte (price: 1.00).\r\n";
        }
        
        if (coin.getValue() >= 0.5) {
            cout << "You are eligible for an iced coffee (price: 0.50).\r\n";
        }

        if (coin.getValue() >= 0.25) {
            cout << "You are eligible for a simple black coffee (price: 0.25).\r\n";
        }
    }
}