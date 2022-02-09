#include "Caravan.h"

Caravan::Caravan() {
    
}

Caravan::~Caravan() {
    delete suitcase;
}

Caravan::Caravan(const Caravan &other) {
    if (this == &other) {
        return;
    }

    color = other.color;

    addSuitcase(other.color);
}

Caravan &Caravan::operator=(const Caravan &other) {
    if (this == &other) {
        return *this;
    }

    color = other.color;

    addSuitcase(other.suitcase->color);

    return *this;
}


void Caravan::addSuitcase(string c) { 
    suitcase = new Suitcase();
    suitcase->color = c;
}