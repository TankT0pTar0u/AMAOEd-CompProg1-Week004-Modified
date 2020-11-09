/* ****************************************************************
 * @author: Kevin Balmores
 * @app name: Enrollment Slip
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

    char name[50], course[50];
    string yearName;
    int yearLevel;
    float enrolledUnits, tuitionFee{}, downPayment, balance;

    cout << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "\tStudent Name\t: ";
    cin.getline(name, 50);
    cout << "\tProgram/Course\t: ";
    cin.getline(course, 50);
    cout << "\tYear Level\t: ";
    cin >> yearLevel;
    cout << "\tNo. of Units\t: ";
    cin >> enrolledUnits;

    if (yearLevel == 1)
    {
        tuitionFee = enrolledUnits * 1500.0f;
        yearName = "Freshman";
    }
    else if (yearLevel == 2) {
        tuitionFee = enrolledUnits * 1800.0f;
        yearName = "Sophomore";
    }
    else if (yearLevel == 3) {
        tuitionFee = enrolledUnits * 2000.0f;
        yearName = "Junior";
    }
    else if (yearLevel == 4 || yearLevel == 5) {
        tuitionFee = enrolledUnits * 2300.0f;
        yearName = "Senior";
    }
    else {
        cout << "Enter a valid year level." << endl;
    }

    downPayment = tuitionFee * 0.30f;
    balance = tuitionFee - downPayment;

    cout << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "\t\tENROLLMENT SLIP" << endl;
    cout << endl;
    cout << "\tStudent Name\t: " << name << endl;
    cout << "\tProgram/Course\t: " << course << endl;
    cout << "\tYear Name\t: " <<yearName << endl;
    cout << "\tNo. of Units\t: " << enrolledUnits << endl;
    cout << "\tTuition Fee\t: " << tuitionFee << endl;
    cout << "\tDown Payment\t: " <<downPayment << endl;
    cout << "\tBalance\t\t: " << balance << endl;
    cout << endl;

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
