# GlyphLock

## Overview
glyphLock is a simple cipher program that takes a users input and scrambles it through a cipher key
## Features
- Algorithm that parses the ascii range of 32 through 126
- Allows for custom cipher length
| Notice | The way the algorithm is set up is that it covers the ascii range of 32 through 126. Additionally the keys provided should be altered to add more complexity behind the cipher.

| About | glyphLock is a simple cipher program that takes a users input and scrambles it through a cipher key to allow users to generate a encrypted string of text or generating more complex passwords, and then printing the output to the terminal and appending it to the file "glyph.txt". Additionally, I used my schools(Chemeketa Community College) basic C++ program template for my project, which conveniently handled backend aspects such as version control, editor configuration, and build automation. This allowed me to focus on writing the core logic of my program.

| ETC | I started this project as a challenge to learn simple encryption methods using the programming language C, however, I ran into a multitiude of problems and decided to build the program in C until I learned more from my class that taught C. As I began rewriting the code from C to C++ I found it to be a whole lot easier to navigate, but since I'm writing this two months later I've gone over the code and noticed I should have just assigned the defaultKeys as a global variable to allow the user to find the keys easier, and I've created a better template for the default keys that I will also be updating

