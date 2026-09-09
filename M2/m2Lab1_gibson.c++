// CSC 134
// M2Lab1 - Product Sales
// Gibson
// 9/9/26


#include <iostream>
using namespace std;

int main() {
    // Set up Variables
    string product_name;
    int    product_count;
    double product_price;   // $ USD, per item
    // variable for customer side
    int    purchase_count;
    double purchase_total;


    // Get input
    cout << "Store Setup" << endl;
    cout << "Product Name: ";
    cin >> product_name;
    cout << "Item Count: ";
    cin >> product_count;
    cout << "Price Each:  $";
    cin >> product_price;

    // Get input - Greet user, get their order
    cout << "----------------------------------" << endl << endl;
    cout << "Welcome, Customer." << endl;
    cout << "Welcome to the " << product_name << " Shop." << endl;
    cout << "Our " << product_name << "(s) are $" << product_price << " each." << endl;

    cout << "How many would you like to buy today? ";
    cin >> purchase_count;


    // Do the Processing
    // Note: we don't verify the user input -- they can buy more than we have, or a negative amount.
    // This will be fixed in the Loops module.
    purchase_total = purchase_count * product_price;

    // Print Output
    cout << "You have ordered " << purchase_count << " " << product_name << "(s)." << endl;
    cout << " Total Price: $" << purchase_total << endl;
    cout << "Thank you for shopping with CSC 134." << endl << endl;


    return 0; // no errors

}