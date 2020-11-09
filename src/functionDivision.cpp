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

int divide(int a, int b) {
    return a / b;
}
 
int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // Right Click the source file -> Properties ->
    // Under General -> Exclude from build -> <inherit from parent or project defaults>
    // Change it back to YES to run other source files
    // ***********************************************************

    //divide 3 sets of non-zero integers, 2 integer per set, 

    int x[3][2];
    for (int i = 0; i < 3; i++) {
        cout << "SET " << i + 1 << endl;
        do {
            cout << "Dividend: ";
            cin >> x[i][0];
        } while (x[i][0] == 0);

        do {
            cout << "Divisor: ";
            cin >> x[i][1];
        } while (x[i][1] == 0);
    }
    // display output
    for (int i = 0; i < 3; i++) {
        cout << "SET " << i + 1 << " (" << x[i][0] << " / " << x[i][1] << ") =" << divide(x[i][0], x[i][1]) << endl;
    }

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
