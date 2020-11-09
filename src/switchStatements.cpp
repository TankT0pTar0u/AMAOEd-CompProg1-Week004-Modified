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

    switch (num)
    {
    case 0:
        cout << "\tHello World" << endl;
        break;
    case 1:
        cout << "\tI am good" << endl;
        break;
    case 2:
        cout << "\tTo the Top" << endl;
        break;
    case 3:
        cout << "\tWhere is the Horizon" << endl;
        break;
    case 4:
        cout << "\tI do not know" << endl;
        break;
    default:
        cout << "\tYeah, I will." << endl;
        break;
    }


    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
