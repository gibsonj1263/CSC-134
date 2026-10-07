/*
CSC - 134
M3HW1 - Gold
Gibson
9/30/26
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
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
    string meal_name;  // ex. chicken sandwich 
    double meal_price; // $
    int choice;
    double tip;
    double tip_percentage;
    double tax_rate;   // percent
    double tax_amount; // in USD
    double total;      // $, meal + tax

    cout << "Receipt Calculator Program" << endl << endl;
    // Input
    meal_name = "Chicken Sandwich";
    cout << "Enter the price of your meal here: $";
    cin >> meal_price;
    cout << "Is your order dine in or take away? Type 1 or 2. ";
    cin >> choice;

    if (choice == 1) {
        tip_percentage = 0.15;
    }
    else if (choice == 2) {
        tip_percentage = 0;
    }
    else {
        cout << "Invalid Choice, Please type either 1 or 2.";
    }



    // Processing
    tax_rate = 0.08;
    tax_amount = meal_price * tax_rate;
    tip = meal_price * tip_percentage;
    total      = meal_price + tax_amount + tip;

    // Output
    // todo: print like a receipt
    string line = "===================================";
    cout << line << endl;
    
    // set width of columns and set 2 decimal places

    cout << setprecision(2) << fixed;
    cout << setw(20) << meal_name << setw(10) << meal_price << endl;
    cout << setw(20) << "tax: " << setw(10) << tax_amount << endl;
    cout << setw(20) << "tip: " << setw(10) << tip << endl;
    cout << line << endl;
    cout << setw(20) << "Total: " << setw(10) << total << endl;
    cout << "Thank You Come Again" << endl << endl;

}

void question3() {


    cout << "Choose Your Own Adventure" << endl;

    int choice;
    
    // Adventure menu
    cout << "Knight vs. Dragon" << endl;
    cout << "1) Slash the dragon with your sword" << endl;
    cout << "2) Walk away" << endl;
    cout << "? ";
    cin >> choice;

    if (choice == 1) {
        cout << "You Have Slayed The Dragon!!!" << endl;
        cout << "NICE JOB";
    }
    else if (choice == 2) {
        cout << "You Have Walked Away. The Princess is Dead." << endl;
        cout << "YOU LOSE!!!";
    }
    else {
        cout << "Invalid choice. Please type 1 or 2.";
    }
}

void question4() {
    cout << "Math Practice" << endl;

    srand(time(0));

    int num1 = (rand() % 9) + 1;
    int num2 = (rand() % 9) + 1;
    int total = num1 + num2;
    int answer;

    // ask the question
    cout << "What is " << num1 << " + " << num2 << " = " << endl;
    cin >> answer;

    if (total == answer) {
        cout << "You've Answered Correctly. Good Job!!";
    }
    else {
        cout << "You've Answered Incorrectly. Try Again.";
    }



}
