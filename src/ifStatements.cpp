/* ****************************************************************
 * @author: <your name here>
 * @app name: <your application name here>
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

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

    int num;
    cout << "\tEnter an integer: ";
    cin >> num;

    if (num == 0) {
        cout << "\tHello World" << endl;
    }
    else if (num == 1) {
        cout << "\tI am Groot" << endl;
    }
    else if (num == 2) {
        cout << "\tTo the Top" << endl;
    }
    else if (num == 3) {
        cout << "\tWhere is the horizon" << endl;
    }
    else if (num == 4) {
        cout << "\tI do not know" << endl;
    }
    else {
        cout << "\tYeah, I will." << endl;
    }

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
