#include <iostream>
#include "SpecialCoin.h"
#include "FullCoin.h"
#include "HalfCoin.h"
#include "Machine.h"

using namespace std;

int main() {
    Machine machine = Machine();

    machine.insert(SpecialCoin());
    machine.insert(HalfCoin());
    machine.insert(FullCoin());

    int tttt;
    cin >> tttt;

    return 0;
}