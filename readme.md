# glyphLock C++

## Overview
glyphLock is a simple cipher program that takes a user’s input and scrambles it using a cipher key to generate encrypted string of text.

### Features
- Algorithm that parses the ascii range of 32 through 126
- Supports user-defined cipher keys (editable in the program backend)
- Prints encrypted strings
- Appends encrypted strings to the file _glyph.txt_

#### Development Notes
- Project started in C to explore basic encryption methods.
- Rewritten in C++ for improved structure, maintainability, and to address memory allocation challenges encountered in C.
- Leveraged Chemeketa Community College’s C++ program template, which handled:
  - Version control
  - Editor configuration
  - Build automation
- 



 Additionally, I used my schools(Chemeketa Community College) basic C++ program template for my project, which conveniently handled backend aspects such as version control, editor configuration, and build automation. This allowed me to focus on writing the core logic of my program.

| ETC | I started this project as a challenge to learn simple encryption methods using the programming language C, however, I ran into a multitiude of problems and decided to build the program in C until I learned more from my class that taught C. As I began rewriting the code from C to C++ I found it to be a whole lot easier to navigate, but since I'm writing this two months later I've gone over the code and noticed I should have just assigned the defaultKeys as a global variable to allow the user to find the keys easier, and I've created a better template for the default keys that I will also be updating

