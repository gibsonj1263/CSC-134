// CSC 134
// M2T2 - Receipt
// Gibson
// 9/14/26
// build a receipt that looks like a receipt


#include <iostream>
// iomanip lets you use setw() and setprecision() and fixed
#include <iomanip>
using namespace std;

int main() {
    
    // Declare Variables
    string meal_name;  // ex. chicken sandwich 
    double meal_price; // $
    double tax_rate;   // percent
    double tax_amount; // in USD
    double total;      // $, meal + tax
    // Input
    meal_name = "Chicken Sandwich";
    meal_price = 5.99;
    tax_rate = 0.08;    // 8%



    // Processing
    tax_amount = meal_price * tax_rate;
    total      = meal_price + tax_amount;

    // Output
    // todo: print like a receipt
    string line = "===================================";
    cout << line << endl;
    
    // set width of columns and set 2 decimal places

    cout << setprecision(2) << fixed;
    cout << setw(20) << meal_name << setw(10) << meal_price << endl;
    cout << setw(20) << "tax: " << setw(10) << tax_amount << endl;
    cout << line << endl;
    cout << setw(20) << "Total: " << setw(10) << total << endl;
    cout << "Thank You Come Again" << endl << endl;

    return 0;
}
