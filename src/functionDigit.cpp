/* ****************************************************************
 * @author: Kevin Balmores
 * @app name: Hello Lab
 * @app desc: <describe the purpose of your application here>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
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
void digit(int a) {
    int tens, ones;
    tens = a / 10;
    ones = a % 10;
    cout <<"\t" << tens << ", " << ones << endl << endl;
}

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // Right Click the source file -> Properties ->
    // Under General -> Exclude from build -> <inherit from parent or project defaults>
    // Change it back to YES to run other source files
    // ***********************************************************
    int n;
    do {
        cout << "Enter Number: ";
        cin >> n;
        // check and limit the input
        if (!cin) {
            cout << "Invalid input.\n" << endl;
            cin.clear();
            cin.ignore();
        }
        else if (n <= 99 && n >= 10) {
            digit(n);
        }
        else {
            cout << "Try numbers between 10 - 99.\n" << endl;
        }
    } while (true);
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
