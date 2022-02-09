#ifndef MACHINE_H
#define MACHINE_H

#include <string>
#include "Coin.h"

using namespace std;


class Machine {
    protected:
    
    public: 
        Machine();

        void insert(Coin coin);
};

#endif