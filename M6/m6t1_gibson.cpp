/*
CSC - 134
M6T1 - Basic Arrays
gibsonj
11/6/26
First try: No arrays
*/

#include <iostream>
using namespace std;

// function declarations
void method1();
void method2();
void method3();

// main
int main() {
    // Count # of Pokemon per day, two different ways
    method1();
    method2();
    method3();  // range based for loop

    return 0;
}

void method1() {
    // method 1 with arrays
    string item = "pokemon";
    cout << "Count how many " << item << " were seen each day." << endl;
    // count for five days
    const int SIZE = 5;
    int counts [SIZE];
    int total = 0;
    double average = 0;
    for (int i=0; i < SIZE; i++) {
        cout << "Day " << i+1 << ": "; // print 1-5, not 0-4 
        cin >> counts[i];
        total += counts[i];
    }
    cout << "Total " << item << " seen: " << total << endl;
    average = (double) total / SIZE; // double / int -> double
    cout << "Average per day: " << average << endl;
    cout << item << " caught per day: " << endl;
    for (int i=0; i < SIZE; i++) {
        cout << "Day " << i+1 << ": " << counts[i] << endl;
    }
}

void method2() {
    // same total and average, no array
    string item = "pokemon";
    cout << "Count how many " << item << " were seen each day." << endl;
    // count for five days
    const int SIZE = 5;
    int total = 0;
    int today;
    double average = 0;
    // get the input, add to toal
    for (int i=0; i < SIZE; i++) {
        cout << "Day " << i+1 << ": ";
        cin >> today;
        total += today;
    }
    cout << "Total " << item << " seen: " << total << endl;
    average = (double) total / SIZE; // double / int -> double
    cout << "Average per day: " << average << endl;
}

void method3() {
    // range-based for loop.
    // cannot buffer overflow, because we don't handle the index ourselves
    const int SIZE = 5;
    int counts[5] = {0, 0, 0, 0, 0};
    cout << "Count pokemon per day" << endl;
    for (int& count: counts) {
        cout << "> ";
        cin >> count;
    }
    // Now do total and average
    int total = 0;
    double average = 0;
    for (int& count: counts) {
        total += count;
    }
    average = (double) total / SIZE;
    cout << "Total: " << total << endl << "Average: " << average << endl;
}