#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include "GlyphLock.h"

using namespace std;

//Modify the keys here to your own liking as these are not very complex keys
string defaultGlyphKeys[95] = {
  "0X01", "0X02", "0X03", "0X04", "0X05", "0X06", "0X07", "0X08", "0X09", "0X10",
  "0X11", "0X12", "0X13", "0X14", "0X15", "0X16", "0X17", "0X18", "0X19", "0X20",
  "0X21", "0X22", "0X23", "0X24", "0X25", "0X26", "0X27", "0X28", "0X29", "0X30",
  "0X31", "0X32", "0X33", "0X34", "0X35", "0X36", "0X37", "0X38", "0X39", "0X40",
  "0X41", "0X42", "0X43", "0X44", "0X45", "0X46", "0X47", "0X48", "0X49", "0X50",
  "0X51", "0X52", "0X53", "0X54", "0X55", "0X56", "0X57", "0X58", "0X59", "0X60",
  "0X61", "0X62", "0X63", "0X64", "0X65", "0X66", "0X67", "0X68", "0X69", "0X70",
  "0X71", "0X72", "0X73", "0X74", "0X75", "0X76", "0X77", "0X78", "0X79", "0X80",
  "0X81", "0X82", "0X83", "0X84", "0X85", "0X86", "0X87", "0X88", "0X89", "0X90",
  "0X91", "0X92", "0X93", "0X94", "0X95"
    };

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

