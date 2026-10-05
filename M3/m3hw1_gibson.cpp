/*
CSC - 134
M3HW1 - Gold
Gibson
9/30/26
*/

#include <iostream>
#include <iomanip>
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
    string answer;
    string answer_yes = "yes";
    string answer_no = "no";

    cout << "Chat Bot Program" << endl << endl;

    cout << "Hello, I'm a Chat Bot Program" << endl;
    cout << "Do you like me? Yes or No" << endl;
    cin >> answer;

    // calculations
    if (answer == answer_yes) {
        cout << "That's great! I'm sure we'll get along.";
    }
    else if (answer == answer_no) {
        cout << "Well, maybe you'll learn to like me later.";
    }
    else {
        cout << "If you're not sure… that's OK.";
    }
}

void question2() {
    // Declare variables
    double meal_price;
    int choice;
    double tax;
    double tip;
    double total;

    cout << "Receipt Calculator" << endl;

    // Get the meal price and whether it is for here or to go.
    cout << "Please enter the price of your meal." << endl;
    cout << "Meal price: ";
    cin >> meal_price;
    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> choice;

    // calculations
    if (choice == 1) {
        cout << "You have chosen to dine in." << endl;
    }
else if (choice == 2) {
    cout << "You've ordered you meal to go." << endl;
    }
}

void question3() {
    cout << "Choose Your Own Adventure" << endl;
}

void question4() {
    cout << "Math Practice" << endl;
}
