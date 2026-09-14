// CSC 134
// M2T2 - Receipt
// Gibson
// 9/14/26
// build a receipt that looks like a receipt


#include <iostream>
using namespace std;

int main() {
    
    // Declare Variables
    string meal_name;  // ex. chicken sandwich 
    double meal_price; // $
    double tax_rate;   // percent
    double tax_amount; // in USD
    double total;      // $, meal + tax
    // Input
    meal_name = "chicken sandwich";
    meal_price = 5.99;
    tax_rate = 0.08;    // 8%



    // Processing
    tax_amount = meal_price * tax_rate;
    total      = meal_price + tax_amount;

    // Output
    string line = "-----------------------------------";
    cout << line << endl;
    cout << meal_name << " " << meal_price << endl;
    cout << "tax: " << " " << tax_amount << endl;
    cout << line << endl;
    cout << "Total: " << total << endl;
    cout << "Thank You Come Again" << endl << endl;

    return 0;
}
