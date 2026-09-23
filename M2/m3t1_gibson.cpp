/*
CSC 134
M3T1
Gibson
9/21/26
Ask the user for the width, and length of two rectangles
Find the area
*/

#include <iostream>
using namespace std;

int main() {

    // Variables 
    double leng1, wid1, leng2, wid2;
    double area1, area2;

    // Input: Ask the user for length and width
    cout << "What is the length of the first rectangle? ";
    cin >> leng1;
    cout << "What is the width of the first rectangle? ";
    cin >> wid1;
    cout << "What is the length of the second rectangle? ";
    cin >> leng2;
    cout << "What is the width of the second rectangle? ";
    cin >> wid2;

    // Processing: Find the area
    area1 = leng1 * wid1;
    area2 = leng2 * wid2;

    // Output: Print the area
    cout << "====================================================" << endl;
    cout << "The area of the first rectangle is: " << area1 << " sq. ft." << endl;
    cout << "The area of the second rectangle is: " << area2 << " sq. ft." << endl;

    return 0; // no errors
}
