/*
CSC 134
M5T2 - More Practice with Functions
Gibsonj
10/21/26
*/

#include <iostream>
using namespace std;

// void function 
void print_answer_line();

// value returning functions
int num_squared(int square);

int main() {
    int square;
    int answer = num_squared(square);


    return 0;
}

int num_squared(int square) {
    square ^= 2;
    return square;
}

void print_answer_line() {
    for (int i = 1; i <=10; i++) {
        cout << i << endl;
    }

}