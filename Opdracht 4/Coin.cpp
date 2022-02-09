#include "Coin.h"

Coin::Coin() {
}


string Coin::getName() { 
    return name;
}


float Coin::getValue() { 
    return value;
}

bool Coin::isSpecial() {
    return special;
}