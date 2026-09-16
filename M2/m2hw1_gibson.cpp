/*
CSC 134
M2HW1 - homework (4 questions max)
Gibson
9/16/26
How to use:
- Fill in the functions for any questions you answer
- uncomment those function in main, so they run
*/

#include <iostream>
#include <iomanip>
using namespace std;


void question1();
void question2();
void question3();
void question4();

int main() {
    // Run only the questions you finish by removing the // 
    question1();
    //question2();
    //question3();
    //question4();
}

void question1() {
    cout << "Question 1: Banking Transaction Sim." << endl;
    
    // declare variables
    string account_holder_name;
    const double account_number = 1357908642;
    double starting_account_balance;
    double deposit;
    double withdrawl;
    double final_account_balance;

    // input 
    cout << "Enter Your Name: ";
    cin >> account_holder_name;
    cout << "Enter Your Starting Account Balance: $";
    cin >> starting_account_balance;
    cout << "How much cash would you like to deposit: $";
    cin >> deposit;
    cout << "How much cash would you like to withdrawl: $";
    cin >> withdrawl;

    // processing
    final_account_balance = (starting_account_balance + deposit) - withdrawl;

    // output
    cout << setprecision(2) << fixed;
    cout << "----------------------------------" << endl << endl;
    cout << account_holder_name << endl;
    cout << account_number << endl;
    cout << endl;
    cout << "Your Final Account Balance is: $" << final_account_balance << endl;

}

void question2() {
    cout << "Question 2 goes here" << endl;
}

void question3() {
    cout << "Question 3 goes here" << endl;
}

void question4() {
    cout << "Question 4 goes here" << endl;
}