#include "Caravan.h"

int main() { 
    Caravan *caravan = new Caravan();
    caravan->color = "blue";
    caravan->addSuitcase("red");

    cout << "Mr. Van Puffelen's caravan color: " << caravan->color << endl;
    cout << "Mr. Van Puffelen's suitcase color: " << caravan->suitcase->color << endl;
    //cout << "Mr. Van Puffelen's sock color: " << caravan->suitcase->sock->color << endl;
    // Onmogelijk om de sok te referencen. Snap niet waarom.

    Caravan *stolen = new Caravan();
    *stolen = *caravan;
    
    cout << "Stolen caravan color: " << stolen->color << endl;
    cout << "Stolen suitcase color: " << stolen->suitcase->color << endl;
    //cout << "Stolen sock color: " << stolen->suitcase->sock->color << endl;
    // Onmogelijk om de sok te referencen. Snap niet waarom.

    system("PAUSE");

    delete caravan;
    delete stolen;

    return 0;
}