#include "Suitcase.h"

Suitcase::Suitcase() {
    Sock *sock = new Sock();
    sock->color = "green";
}

Suitcase::~Suitcase() {
    delete sock;
}

Suitcase::Suitcase(const Suitcase &other) {
    if (this == &other) {
        return;
    }

    addSock(other.sock->color);
}

Suitcase &Suitcase::operator=(const Suitcase &other) {
    if (this == &other) {
        return *this;
    }

    addSock(other.sock->color);

    return *this;
}

void Suitcase::addSock(string c) { 
    sock = new Sock();
    sock->color = c;
}