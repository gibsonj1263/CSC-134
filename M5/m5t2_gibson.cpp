/*
CSC 134
M5T2 - More Practice with Functions
Gibsonj
10/21/26
*/

#include <iostream>
using namespace std;

// Prototypes: Declare functions here, define them under main
int square(int num);
void printAnswerLine(int number, int squared);

int main() {
    cout << "Table of Squares Program" << endl;
    bool done = true;
    while (done==false) {
        cout << "Keep Going...";
    } 
    bool is_valid = false;
    while (false==is_valid) {
        for (int i = 1; i <= 10; i++) {
            cout << i << endl;
            is_valid = true;
        }
    }

}

// Define functions here.
int square(int num) {
    // Does the math -- input, an integer, output, that integer squared

    return num * num;
}

void printAnswerLine(int number, int squared) {
    // Print one line of the table of squares.
    // example output:
    // 3        9
    cout << number << " squared is " << squared << endl;
}