// one line comment
/*
Block comment
M1T1 - Hello World
Gibson
8/19/26
First program - just a smoke test.
*/

// magic words to start up

#include <iostream>

using namespace std;

// main() is a FUNCTION - a verb
int main()
{
    cout << "Hello CSC 134!" << endl;
    string name;
    cout << "What's your name? ";
    cin >> name; // input - reads the name into this variable

    cout << " This program is for: " << name << endl;
    return 0; // no errors
}
