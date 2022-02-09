#pragma once

#include "Object.h"
#include "Suitcase.h"

using namespace std;


class Caravan : public Object {
    public: 
        Suitcase *suitcase;

        Caravan();
        ~Caravan();
        Caravan(const Caravan &other);
        Caravan &operator=(const Caravan &other);

        void addSuitcase(string c);
};