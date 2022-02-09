using namespace std;

#include <iostream>
#include <fstream>
#include <string>


/* 
    Maak een class die de text in een file teken-voor-teken achterstevoren in een ander file wegschrijft, zonder gebruik te maken van een array of vector.
*/


int main() {
    ifstream file("jabberwocky.txt"); 
    ofstream output("output.txt");
    char ch;
    int count;
    string text;

    if (!file) {
        cout << "Unable to open file.";
        exit(1);
    }

    file.seekg(0, file.end);
    count = file.tellg();
    
    file >> noskipws;
    
    for (int i = count - 1; i > 0; --i) {
        file.seekg(i);
        file.get(ch);
        text += ch;
    }

    output << text;

    file.close();
    output.close();

    return 0;
} 