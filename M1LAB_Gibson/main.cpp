// CSC - 134
// M1LAB - apple sales
// Jacob Gibson
// 8/26/26
// calculate orange prices

#include <iostream>

using namespace std;

int main()
{
    // Introduction
    string name = "Gibson";
    string product = "orange";

    cout << "Welcome to the " << name << " ";
    cout << product << " farm." << endl;

    // Product Price Calculations
    int product_count = 100000;
    double product_price = 0.50; // in USD

    cout << "We have " << product_count << " ";
    cout << product << "s. They are $" << product_price;
    cout << " each." << endl;

    double total_price = product_count * product_price;
    cout << "Total price for all " << product_count;
    cout << " is: $" << total_price << endl;

    return 0;
}
