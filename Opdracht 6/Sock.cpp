#include "Sock.h"

Sock::Sock() {
    
}

Sock::~Sock() {
    
}

Sock::Sock(const Sock &other) {
    if (this == &other) {
        return;
    }

    color = other.color;
}

Sock &Sock::operator=(const Sock &other) {
    if (this == &other) {
        return *this;
    }

    color = other.color;

    return *this;
}