/*
CSC - 134
M5T1 - Intro to Functions
Gibsonj
10/19/26
*/

#include <iostream>
using namespace std;

//void function
void greet();
void speak(string message);
// value returning functions
int num_add(int num);
int num_double(int num);

int main() {
    cout << "Void Function Example" << endl;
    greet();
    speak("Hello World");
    speak("another message");
    cout << "Value Returning Example" << endl;
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    int answer = num_add(number);
    cout << "num_add(" << number << ") returns: " << answer << endl;

    answer = num_double(number);
    cout << "num_double(" << number << ") returns: " << answer << endl;


    return 0;
}

// define functions here
void greet() {
    // greet the user: no arguments in, no return out
    cout << "What's up?" << endl;
}

void speak(string message) {
    // talk to user:
    // arguments: string, the mesaage to speak
    // return: none
    // (this would be useful if I wanted speak text to look a certain way, etc.)
    cout << message << endl;
}

// value-returning functions
int num_add(int num) {
    // arguments: num, the value to start with
    // return: int, num + 1
    num = num + 1;
    return num;
}
int num_double(int num) {
    // arguments: num, the value to start with
    // return: int, num + 1
    num *= 2; // asme as num = num * 2
    return num;
}