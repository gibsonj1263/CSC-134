/*
CSC - 134
M3LAB1 - if statements
Gibson
9/28/26
*/

#include <iostream>
using namespace std;

void choice1();
void choice2();
void choice3();
void choice4();

int main() {
  
  int choice; // menu choice

  // ask the question
  cout << "You have entered a super market" << endl;
  cout << "1. Choose to go into the candy isle. " << endl;
  cout << "2. Choose to go into the deli section " << endl;
  cout << "3. Choose to go into the cereal isle. " << endl;
  cout << "4. Turn around and leave. " << endl;
  cout << "? "; // the prompt
  cin >> choice;

  // can also say (choice == 1)
  if (1 == choice) {
    choice1();
  }
  else if (2 == choice) {
    choice2();
  }
  else if (3 == choice) {
    choice3();
  }
  else if (4 == choice) {
    choice4();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
    // program ends, or we could loop around again
  }

  cout << "Thank you for playing!" << endl;
  return 0; // no errors

} // end of the main() method

////
// After main(), we define all our other functions.
// (Declaring means "This function exists", we did that above.)
// (Defining means "This is what the function does".)
////

void choice1() {
    int answer1;
  // this function is called in main if the user chooses 1.
  cout << "You chose to go into the candy isle" << endl;
  cout << "1. Choose to buy Jolly Ranchers." << endl;
  cout << "2. Choose to buy Candy Corn." << endl;
  cout << "? "; // the prompt
  cin >> answer1;

  if (1 == answer1) {
    cout << "Nice choice." << endl;
  }
  else if (2 == answer1) {
    cout << "Ew nasty." << endl;
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
    // program ends, or we could loop around again
  }
}

void choice2() {
    int answer2;
  // this function is called in main if the user chooses 2.
  cout << "You chose to go into the deli isle" << endl;
  cout << "1. Choose to buy turkey meat." << endl;
  cout << "2. Choose to buy olive loaf" << endl;
  cout << "? "; // the prompt
  cin >> answer2;

  if (1 == answer2) {
    cout << "Solid choice, but a little bland." << endl;
  }
  else if (2 == answer2) {
    cout << "Strange choice, but not bad." << endl;
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
    // program ends, or we could loop around again
  }
}

void choice3() {
    int answer3;
    // this function is called in main if the user chooses 3.
    cout << "You chose to go into the cereal isle." << endl;
    cout << "1. Choose to buy Cheerios." << endl;
    cout << "2. Choose to buy Raisin Bran." << endl;
    cout << "? "; // the prompt
    cin >> answer3;

    if (1 == answer3) {
    cout << "Nice, kinda plain but solid." << endl;
    }
    else if (2 == answer3) {
    cout << "Are you an elderly person?" << endl;
     }
    else {
    cout << "I'm sorry, that is not a valid choice." << endl;
    // program ends, or we could loop around again
  }
}

void choice4() {
    // this function is called in main if the user chooses 4.
    cout << "You chose to turn around and leave." << endl;
    cout << "This action makes you feel like you just wasted your time." << endl;
}


