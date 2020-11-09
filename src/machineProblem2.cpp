/* ****************************************************************
 * @author: Kevin Balmores
 * @app name: Hello Lab
 * @app desc: Machine Problem 2
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

    int seats[5][7];
    int i, j;
    int seatCounter = 1;
    int reservedSeat;

    cout << "\t\t\t SEAT RESERVATION" << endl << endl;
    // Assign seat numbers to elements
    for (i = 0; i < 5; i++) {       // rows
        for (j = 0; j < 7; j++) {   // columns
            seats[i][j] = seatCounter++;
        }
    }
    // Loop the process
    do {
        bool isTaken = true;
        // Display the seats
        for (i = 0; i < 5; i++) {       // rows
            for (j = 0; j < 7; j++) {   // columns
                cout << "\t" << seats[i][j] << "   ";
            }
            cout << endl;
        }
        // Get user input for seat number
        cout << " Enter seat number to reserve : ";
        cin >> reservedSeat;
        cout << endl;
        // Check if user input is not an Integer
        if (!cin) {
            cout << " Invalid input.\n" << endl;
            cin.clear();
            cin.ignore();
        }
        // Check if user input is equivalent to a number in the array
        else if (reservedSeat > 35 || reservedSeat <= 0) {
            cout << " Seat Number " << reservedSeat << " is not available.\n" << endl;
        }
        else if (reservedSeat > 0 && reservedSeat <= 35) {
            for (i = 0; i < 5; i++) {
                for (j = 0; j < 7; j++) {
                    if (reservedSeat == seats[i][j]) {
                        seats[i][j] = 0;
                        cout << " Seat successfully reserved\n" << endl;
                        isTaken = false;  // needs to act as a switch
                    }
                }
            }
            if (isTaken) {
                cout << " Seat Number " << reservedSeat << " is taken.\n" << endl;
            }
        }
    } while (true);
    
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
