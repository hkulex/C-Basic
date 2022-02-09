#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include "main.h"

using namespace std;


int turn = 0;
bool alive = true;
vector<int> sequence;

int main() {
    system("CLS");
    cout << "Welcome to Simon Says!\r\n";
    system("PAUSE");

    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        sequence.push_back(rand() % 10);
    }

    while (alive) {
        cout << "Repeat after me...\r\n";
        printSequence();
        
        system("PAUSE");
        system("CLS");

        for (int i = 0; i < sequence.size(); i++) {
            int input;
            cout << "Enter the #" << i + 1 << " number in the sequence: ";
            cin >> input;

            if (input != sequence.at(i)) {
                alive = false;
                break;
            }
        }

        if (alive) {
            cout << "Nice one! Let's add a number...\r\n";

            sequence.push_back(rand() % 10);
            turn++;

            system("PAUSE");
            system("CLS");
        }
    }
    
    system("CLS");
    cout << "Game over!\r\nYou completed " << turn << " turn(s)!\r\n";
    system("PAUSE");

    return 0;
}

void printSequence() {
    for (int i = 0; i < sequence.size(); i++) {
        cout << sequence.at(i) << " ";
    }

    cout << "\r\n";
}