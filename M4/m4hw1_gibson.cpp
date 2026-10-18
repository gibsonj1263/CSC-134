/*
CSC 134
M4HW - bronze
gibsonj
10/12/26
*/

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    int num1, answer;
    num1 = 5;

    for (int i = 1; i <= 12; i++) {
        answer = num1 * i;
        cout << num1 << " x " << i << " = " << answer << endl;
    }

    return 0;
}