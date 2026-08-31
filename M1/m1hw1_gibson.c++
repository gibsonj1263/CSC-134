// CSC 134
// Gibson
// M1HW1 - Movie Talk
// 8/31/26

#include <iostream>
using namespace std;

// Starting point
int main() 
{
    // purpose: practice using string, int, and double within natural text
    // Declare variables
    string movie_name;   // Movie title
    int movie_year;      // year of release
    double movie_grossm; // millions of USD of the gross

    movie_name = "Demolition Man";
    movie_year = 1993;
    movie_grossm = 159.1; // worldwide

    // print movie blurb
    cout << "The Movie " << movie_name << " came out in " << movie_year << "." << endl;

    cout << "It grossed in total $" << movie_grossm << "million." << endl;

    // print movie quote
    cout << "QUOTE:" << endl << "What seems to be your boggle?-Simon Pheonix (Wesley Snipes)" << endl;


    return 0; // no errors
}








