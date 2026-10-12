/*
CSC 134
M4LAB1 - Two D-loops
gibsonj
10/12/26
Draw boxes with text
*/

#include <iostream>
using namespace std;

int main() {
    string token = "🔥"; // use any character you want
    //const int WIDTH = 5;
    //const int HEIGHT = 5;
    // get validated values
    int width = 0;
    int height = 0;
    while (width <= 0 || height <= 0) {
        cout << "Enter rectangle width: ";
        cin >> width;
        cout << "Enter rectangle height: ";
        cin >> height;
    
    // optional: complain
    if (width <= 0) {
        cout << "Width cannot be zero or negative." << endl;
    }
    if (height <= 0) {
        cout << "Height cannnot be zero or negative." << endl;
    }
}
    cout << "Part 1 " << endl;
    // first part: printing one row
    for (int i = 0; i < width; i++) {
        cout << token << " "; // adding a space
    }
    cout << endl; // end of the row

    cout << "Part 2 " << endl;
    //next part: printing one column
    for (int j = 0; j < height; j++) {
        cout << token << endl;
    }

    cout << "Here is your rectangle " << width << " by " << height << endl;
    // full rectangle: print height number of rows
    // each row is width long
    for (int j = 0; j < height; j++) {
        // draw one full row
        for (int i = 0; i < width; i++) {
            cout << token << " ";
        } // (repeat width times)
        cout << endl;
    } // (repeat height times)
    return 0;
}