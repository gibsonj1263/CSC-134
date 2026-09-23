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
    //question1();
    //question2();
    question3();
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
    cout << "Solid Snake Crates Inc. (Economic Shift)" << endl;

    // Declare constants
    const double Cost_Per_Cubic_Foot = 0.30;        // (Material and fabrication cost per cu ft, our cost to make) (Changed from 0.23)
    const double Charge_Per_Cubic_Foot = 0.52;      // (Billed invoice amount, customer cost) (Changed from 0.50)

    // Declare Variables
    double length, width, height;       // you can declare multiple of same type at once
    double volume;                      // V = l * w * h, in cubic ft
    double crate_cost;                  // price to make the crate, USD per cubic ft
    double crate_charge;                // price we sell it for, USD per cubic ft
    double profit;                      // charge - cost

    // Get dimensions of the crate
    cout << "Please enter the crate dimensions." << endl;
    cout << "Crate Length: ";
    cin >> length;
    cout << "Crate Width: ";
    cin >> width;
    cout << "Crate Height: ";
    cin >> height;

    // Calculate the volume of the crate (very important for everything else)
    volume = length * width * height;       // cubic feet

    // Calculate price and cost
    crate_cost = Cost_Per_Cubic_Foot * volume;
    crate_charge = Charge_Per_Cubic_Foot * volume;

    // Calculate profit (price - cost)
    profit = crate_charge - crate_cost;

    // Display results to the user
    cout << setprecision(2) << fixed;       // 2 decimals for all values
    cout << "A crate measuring " << length << " x " << width << " x " << height << " ft. " << endl;
    cout << "Is volume: " << volume << " cubic ft." << endl;
    cout << endl;
    cout << "Cost to build: $" << crate_cost << endl;
    cout << "Sells for:     $" << crate_charge << endl;
    cout << "Profit:        $" << profit << endl;

}

void question3() {
    cout << "Pizza Party Slice Calculator" << endl;

    // Declare Variables
    int pizzas_ordered;

    // Input

    // Processing

    // Output

}

void question4() {
    cout << "Question 4 goes here" << endl;
}