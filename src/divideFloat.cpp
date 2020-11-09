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

    float quotient, dividend, divisor, max, min;
    max = numeric_limits<float>::max();
    min = numeric_limits<float>::min();

    cout << "\tPlease enter your dividend: ";
    cin >> dividend;

    cout << "\tPlease enter your divisor: ";
    cin >> divisor;


    if (dividend > max || divisor > max) {
        cout << "\tInput values exceeded the max allowed value." << endl;
    }
    else if (dividend < min || divisor < min) {
        cout << "\tInput values dropped below the minimum allowed value." << endl;
    }
    else if (divisor == 0) {
        cout << "Divisor should not be zero." << endl;
    }
    else {
        quotient = dividend / divisor;
        cout << "\tThe quotient is :" << quotient << endl;
    }

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
