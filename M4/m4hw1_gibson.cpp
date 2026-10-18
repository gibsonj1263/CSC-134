/*
CSC 134
M4HW - gold
gibsonj
10/12/26
*/

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    int num1, answer;

    bool done = true;
    while (done == false) {
        cout << "Still going...";
    }
    
    // ask user for two numbers plus validation loop
    // number must be between 1 and 12
    bool is_valid = false;
    while (false == is_valid) {
        cout << "Enter a number from 1 to 12: ";
        cin >> num1;
        if (num1 < 1 ) {
            cout << "Number is too low. Please enter a number from 1 to 12." << endl;
        }
        else if (num1 > 12) {
            cout << "Number is too high. Please enter a number from 1 to 12." << endl;
        }
        else {
            for (int i = 1; i <= 12; i++) {
        answer = num1 * i;
        cout << num1 << " x " << i << " = " << answer << endl;
        is_valid = true;
        }
        }
    }
    
    return 0;
}