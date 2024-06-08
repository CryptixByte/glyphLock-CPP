#ifndef GlyphLock_H
#define GlyphLock_H
#include <string>
using namespace std;

/// @brief This just makes an easy line filler of dashes
void dashFiller();

/// @brief Takes user input and returns the input as a string to a variable
/// @return Returns the users input as a string
string glyphInput();

/// @brief Takes user input to scramble it with a cipher to create more complex passwords
/// @param userGlyph Typically the users input or input used to be ciphered
/// @return returns the translated userinput into a cipher for a complex password generator
string glyphScramble(string userGlyph);

void glyphLock();
#endif