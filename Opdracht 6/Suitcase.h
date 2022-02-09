#pragma once

#include "Object.h"
#include "Sock.h"

using namespace std;


class Suitcase : public Object {
    public: 
        Sock *sock;

        Suitcase();
        ~Suitcase();
        Suitcase(const Suitcase &other);
        Suitcase &operator=(const Suitcase &other);

        void addSock(string c);
};