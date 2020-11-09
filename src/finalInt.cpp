/* ****************************************************************
 * @author: Kevin Balmores
 * @app name: Hello Lab
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

void intValue(int& _a) {
    _a = 27946;
}

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // Right Click the source file -> Properties ->
    // Under General -> Exclude from build -> <inherit from parent or project defaults>
    // Change it back to YES to run other source files
    // ***********************************************************

    int a = 654321;
    cout << "Value of variable a = " << a << endl;
    intValue(a);
    cout << "New value of variable a = " << a << endl;
    cout << endl;

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
