#ifndef COIN_H
#define COIN_H

#include <string>

using namespace std;


class Coin {
    protected:
        string name;
        float value;
        bool special;
    
    public: 
        Coin();

        string getName();
        float getValue();
        bool isSpecial();
};

#endif