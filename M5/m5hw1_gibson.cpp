/*
CSC 134
M5HW1 - gold
Gibsonj
10/21/26
*/

#include <iostream>
#include <iomanip>
using namespace std;

void question1();
void question2();
void question3();
void question4();
void question5();

int main() {
cout << "Module 5 Homework Menu" << endl;
    cout << "1. Rainfall Calculator" << endl;
    cout << "2. Hyperrectangle Volume Calculator" << endl;
    cout << "3. Number to Roman Numeral Converter" << endl;
    cout << "4. Geometry Calculator" << endl;
    cout << "5. Distance Traveled Calculator" << endl;
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
    else if (5==choice){
        question5();
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
void question1() {
    cout << "Welcome to the Rainfall Calculator Program" << endl;
    cout << "--------------------------------------------" << endl;
    // variables
    string month1, month2, month3;
    double rainfall1, rainfall2, rainfall3; // using inches
    double average;

    // ask user for the months and rainfall for those months
    cout << "Enter Month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rainfall1;
    cout << "Enter Month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rainfall2;
    cout << "Enter Month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rainfall3;

    // average calculations
    average = (rainfall1 + rainfall2 + rainfall3) / 3;

    // print average rainfall for all three months
    cout << setprecision(2) << fixed;
    cout << "The average rainfall for " << month1 << ", " <<
    month2 << ", and " << month3 << " is " << average << " inches." << endl;


}
void question2() {
    cout << "Welcome to the Hyperrectangle Volume Calculator Program" << endl;
    cout << "---------------------------------------------------------" << endl;
    // variables
    double width, length, height, volume;

    // ask user for the dimensions of the block (aka hyperrectangle)(using inches)
    cout << "Enter width of the block: ";
    cin >> width;
    cout << "Enter length of the block: ";
    cin >> length;
    cout << "Enter height of the block: ";
    cin >> height;

    // volume calculations
    volume = width * length * height;

    // Print volume of the block using measurments given by the user
    cout << "The volume of the block is " << volume << " cubic inches" << endl;
}
void question3() {
    cout << "Welcome to the Number to Roman Numeral Converter Program" << endl;
    cout << "----------------------------------------------------------" << endl;
    // variables
    int num;
    string rom_num;

    // ask user for number from 1 - 10
    cout << "Enter number from 1 to 10: ";
    cin >> num;

    // if statements to determine which roman numeral
    if (num == 1) {
       rom_num = "I"; 
    }
    else if (num == 2) {
        rom_num = "II";
    }
    else if (num == 3) {
        rom_num = "III";
    }
    else if (num == 4) {
        rom_num = "IV";
    }
    else if (num == 5) {
        rom_num = "V";
    }
    else if (num == 6) {
        rom_num = "VI";
    }
    else if (num == 7) {
        rom_num = "VII";
    }
    else if (num == 8) {
        rom_num = "VIII";
    }
    else if (num == 9) {
        rom_num = "IX";
    }
    else if (num == 10) {
        rom_num = "X";
    }
    
    // print the correct roman numeral based on users input
    cout << "The Roman numeral version of " << num << " is " << rom_num << endl;
}
void question4() {
    cout << "Welcome to the Geometry Calculator Program" << endl;
}
void question5() {
    cout << "Welcome to the Distance Traveled Calculator Program" << endl;
}