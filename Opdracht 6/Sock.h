#pragma once

#include "Object.h"

using namespace std;


class Sock : public Object {
    public: 
        Sock();
        ~Sock();
        Sock(const Sock &other);
        Sock &operator=(const Sock &other);
};