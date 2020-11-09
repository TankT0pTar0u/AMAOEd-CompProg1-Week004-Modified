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
    // Right Click the source file -> Properties ->
    // Under General -> Exclude from build -> <inherit from parent or project defaults>
    // Change it back to YES to run other source files
    // ***********************************************************
    int height;

    cout << "Enter Triangle's height: ";
    cin >> height;

    int x, spaces, y = 0;
    do {
        x = height - y;
        spaces = 0;
        //adds spaces before the *
        if (y != 0) {
            do
            {
                cout << " ";
                spaces++;
            } while (spaces < y);
        }
        //prints * along the x-axis
        if (x != 0)
        {
            do
            {
                cout << "* ";
                x--;
            } while (x > 0);
        }
        
        cout << endl;
        y++;
    } while (y <= height);
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
