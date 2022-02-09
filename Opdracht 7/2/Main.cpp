using namespace std;

#include <iostream>
#include <fstream>
#include <string>


/* 
    Maak een class die de text in twee files combineert, door om-en-om een regel uit 't ene, en uit 't andere file in het outputfile te schrijven
*/


int main() {
    ifstream one("jabberwocky.txt"); 
    ifstream two("jabberwocky_lat.txt"); 
    ofstream output("output.txt");

    string text;
    string combined;

    if (!one || !two) {
        cout << "Unable to open file(s).";
        exit(1);
    }

    one >> noskipws;
    two >> noskipws;

    while (getline(one, text)) {
        combined += text + "\n";

        text = "";

        getline(two, text);

        if (!text.empty()) {
            combined += text + "\n";
        }
    }

    output << combined;

    one.close();
    two.close();
    output.close();

    return 0;
} 