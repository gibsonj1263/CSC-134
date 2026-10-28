/*
CSC - 134
M5LAB2 - Complete a Program
gibsonj
10/28/26
*/

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength();
double getWidth();
double getArea();
double displayData(double length, double width, double area);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea();
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

double getLength() {
    double length;
    cout << "Enter Length of Rectangle: ";
    cin >> length;

    return length;
}

double getWidth() {
    double width;
    cout << "Enter Width of Rectangle: ";
    cin >> width;

    return width;
}

double getArea() {
    double area, length, width;
    area = length * width;

    return area;
}

void displayArea(double length, double width, double area) {
    cout << "The Length of your Rectangle is: " << length << endl;
    cout << "The Width of your Rectangle is: " << width << endl;
    cout << "The Area of your Rectangle is: " << area << endl;

    return;
}