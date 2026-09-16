// CSC 134
// M2Lab1 - Crates
// Gibson
// 9/16/26

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

// Declare Constants and Variables
const double Cost_Per_Cubic_Foot = 0.23;        // (Material and fabrication cost per cu ft, our cost to make)
const double Charge_Per_Cubic_Foot = 0.50;      // (Billed invoice amount, customer cost)

// Variables describing the crate
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



return 0; // no errors
}