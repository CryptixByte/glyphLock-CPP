#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include "GlyphLock.h"
using namespace std;

void dashFiller() {
    cout << "-----------------------------------------------------\n";
}

string glyphInput() {
    string glyph = "";
    cout << "Enter a string of text: ";
    cin >> glyph;
    cout << endl;
	dashFiller();
    return glyph;
}

string glyphScramble(string userGlyph) {
    string glyphPre = userGlyph;
    string glyphScrambled = "";
    string defaultGlyphKeys[94] = {
        "Example", "How", "To", "Write", "Keys", "However", 
        "Do", "This", "94", "Times"
    };
    for (char letter : glyphPre){
        if (letter >= 32 && letter <= 126) {
            glyphScrambled += defaultGlyphKeys[letter - 32];
        } else {
            glyphScrambled += letter;
        }
    }
    return glyphScrambled;
}
void glyphLock() {
    string programInput;
    string storeInput;
    cout << "Welcome To glyphLock by Marc Stearns" << endl;
    dashFiller();
    cout << "Select one of the following options below" << endl;
    cout << "1: glyphLock" << endl;
    cout << "2: Password Manager" << endl;
    dashFiller();
    cin >> programInput;
    dashFiller();
        if (programInput == "1" || programInput == "glyphLock") {
        string userInput = glyphInput();
        string glyph = glyphScramble(userInput);
        cout << "Yxux Gxyxh xi Sxrxmxlxd: " << glyph << endl;
        cout << "Would you like to save this glyph(y/n)?: ";
        cin >> storeInput;
            if (storeInput == "Y" || storeInput == "y") {
                ofstream output("glyph.txt", ios::app);
                output << glyph << endl;
                output.close();
                cout << "Glyph Saved!" << endl;
                dashFiller();
            }
            else if (storeInput == "N" || storeInput == "n") {
                cout << "glyphLock Shutting Down" << endl;
            }
        } else if (programInput == "2") {
        cout << "Feature Currently Unavailable";
        } else {
        cout << "Invalid Input" << endl;
        }
}

