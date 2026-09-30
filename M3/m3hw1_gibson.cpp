/*
CSC - 134
M3HW1 - Gold
Gibson
9/30/26
*/

#include <iostream>
using namespace std;

void question1();
void question2();
void question3();
void question4();

int main() {
    cout << "Example of HW" << endl;
    cout << "1. Chat Bot Program" << endl;
    cout << "2. Receipt Calculator" << endl;
    cout << "3. Choose Your Own Adventure" << endl;
    cout << "4. Math Practice" << endl;
    cout << "0. Exit" << endl;
    int choice;
    cin >> choice;
    if (1==choice) {
        question1();
    }
    else if (2==choice) {
        question2();
    }
    else if (3==choice) {
        question3();
    }
    else if (4==choice) {
        question4();
    }
    else if (0==choice) {
        cout << "Bye!" << endl;
        return 0;
    }
    else {
        cout << "Not a valid choice." << endl;
    }
    return 0; 
}

// Function definitions
// Like a dictionary -- name, and then all the code
void question1() {
    // declare variables
    string yes, no;
    string answer;

    cout << "Chat Bot Program" << endl << endl;

    cout << "Hello, I'm a Chat Bot Program" << endl;
    cout << "Do you like me? Yes or No" << endl;
    cin >> answer;

    // calculations
    if (answer == yes) {
        cout << "That's great! I'm sure we'll get along.";
    }
    else if (answer == no) {
        cout << "Well, maybe you'll learn to like me later.";
    }
    else {
        cout << "If you're not sure… that's OK.";
    }
}

void question2() {
    int age = 30;
    cout << "Receipt Calculator" << endl;
}

void question3() {
    cout << "Choose Your Own Adventure" << endl;
}

void question4() {
    cout << "Math Practice" << endl;
}
