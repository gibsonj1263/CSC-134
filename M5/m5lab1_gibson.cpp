#include <iostream>
#include <limits>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
[Gibsonj] - [GPT-6 Luna]
[10/26/26]

This template is a starting point for your own program.
We use void functions to tell a simple story.
The player makes choices, and each choice calls a function.
*/

// FUNCTION PROTOTYPES
// Every function you write must be listed here, above main().
// The compiler reads the file from top to bottom. A prototype
// tells it: "this function exists, and its full code is below."
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_hallway();
void choice_go_home();

// TODO: add your new prototypes here
void choice_upstairs();
void choice_basement();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure: Mansion of the Dead" << endl;
  // Start the story.
  main_menu();
  // When main_menu() returns, the story is over.
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

// FUNCTION DEFINITIONS
// The full code for each function goes here, below main().

void main_menu() {
  // A menu that accepts 1, 2, 3, or 4 (quit).
  cout << "Main Menu" << endl;
  cout << "A storm rattles the iron gates of Blackthorn Mansion." << endl;
  cout << "Beyond them, the mansion's windows glow green. Somewhere inside, footsteps drag across the floor." << endl;
  cout << "What do you do?" << endl;
  cout << "1. Push open the front door" << endl;
  cout << "2. Sneak in through the back" << endl;
  cout << "3. Run home before the zombies see you" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choice: ";
  int choice = 0;
  cin >> choice;
  if (cin.fail()) {
    // The player typed something that is not a number.
    cin.clear(); // reset cin so it can read again
    choice = 0;  // treat it as an invalid choice
  }
  // Throw away the rest of the line the player typed.
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Quitting game." << endl;
    return; // go back to main()
  } else {
    cout << "That isn't a valid choice. Please try again." << endl;
    main_menu(); // try again
  }
}

void choice_front_door() {
  cout << "You seize the front-door handle. An iron chain is looped tight around it." << endl;
  cout << "Rust has fused the links together, and the ancient wooden door won't budge." << endl;
  cout << "A zombie groans inside. The front entrance is a dead end." << endl;
  cout << "What do you do?" << endl;
  cout << "1. Search the side of the mansion for another entrance" << endl;
  cout << "2. Run home before the zombies notice you" << endl;
  int choice = 0;
  cout << "Choice: ";
  cin >> choice;
  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "That isn't a valid choice. Please try again." << endl;
    choice_front_door();
    return;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "That isn't a valid choice. Please try again." << endl;
    choice_front_door();
  }
}

void choice_back_door() {
  cout << "You circle to the back of the mansion." << endl;
  cout << "A cracked window hangs open. From somewhere inside, a low moan rises." << endl;
  cout << "What do you do?" << endl;
  cout << "1. Climb through the window and investigate" << endl;
  cout << "2. Run home before the zombies catch you" << endl;
  cout << "Choice: ";

  int choice = 0;
  cin >> choice;
  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "That isn't a valid choice. Please try again." << endl;
    choice_back_door();
    return;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    cout << "You slip inside. The mansion groans around you." << endl;
    cout << "A crowd of zombies shuffles out of the hallway." << endl;
    choice_hallway();
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "That isn't a valid choice. Please try again." << endl;
    choice_back_door();
  }
}

void choice_hallway() {
  cout << "The zombies turn toward you and close in." << endl;
  cout << "What do you do?" << endl;
  cout << "1. Dodge into a shadowy alcove and let them pass" << endl;
  cout << "2. Try to sprint past the zombies" << endl;
  cout << "Choice: ";

  int choice = 0;
  cin >> choice;
  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "That isn't a valid choice. Please try again." << endl;
    choice_hallway();
    return;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    cout << "You slip into the alcove just in time." << endl;
    cout << "The zombies shuffle past, unaware of you." << endl;
    cout << "When the hallway falls quiet, you move toward a staircase deeper in the mansion." << endl;
    cout << "What do you do?" << endl;
    cout << "1. Climb the stairs to the upper floor" << endl;
    cout << "2. Descend into the basement" << endl;
    cout << "Choice: ";

    int nextChoice = 0;
    cin >> nextChoice;
    if (cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "That isn't a valid choice. Please try again." << endl;
      choice_hallway();
      return;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (1 == nextChoice) {
      choice_upstairs();
    } else if (2 == nextChoice) {
      choice_basement();
    } else {
      cout << "That isn't a valid choice. Please try again." << endl;
      choice_hallway();
    }
  } else if (2 == choice) {
    cout << "The zombies cut you off and close in from every side." << endl;
    cout << "You are trapped inside the mansion with the undead." << endl;
  } else {
    cout << "That isn't a valid choice. Please try again." << endl;
    choice_hallway();
  }
}

void choice_go_home() {
  cout << "You race from the mansion as thunder cracks overhead." << endl;
  cout << "Behind you, zombies snarl and pound against the doors." << endl;
  cout << "You reach home just before sunrise. The mansion is still waiting." << endl;
  cout << "For now, the nightmare is over. The zombies remain trapped inside." << endl;
}

void choice_upstairs() {
  cout << "You climb to the upper floor. Cracked portraits line the long hallway." << endl;
  cout << "A soft voice whispers behind a bedroom door. The floorboards groan beneath your feet." << endl;
  cout << "What do you do?" << endl;
  cout << "1. Open the bedroom door and investigate the voice" << endl;
  cout << "2. Run back down the stairs and leave the mansion" << endl;
  cout << "Choice: ";

  int choice = 0;
  cin >> choice;
  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "That isn't a valid choice. Please try again." << endl;
    choice_upstairs();
    return;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    cout << "You open the door onto a dusty nursery scattered with broken toys." << endl;
    cout << "At its center, a rusted music box plays by itself." << endl;
    cout << "The melody dies. Silence settles over the room. Something waits in the dark." << endl;
    cout << "Zombies climb the stairs behind you. The mansion has found you." << endl;
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "That isn't a valid choice. Please try again." << endl;
    choice_upstairs();
  }
}

void choice_basement() {
  cout << "You descend into the basement. Cold air clings to the walls, slick with black water." << endl;
  cout << "At the far end, a steel door stands ajar. A lantern flickers beyond it." << endl;
  cout << "What do you do?" << endl;
  cout << "1. Step through the steel door" << endl;
  cout << "2. Sprint back upstairs and run away" << endl;
  cout << "Choice: ";

  int choice = 0;
  cin >> choice;
  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "That isn't a valid choice. Please try again." << endl;
    choice_basement();
    return;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    cout << "You push through the iron door into a hidden tunnel carved through the earth." << endl;
    cout << "The tunnel leads outside. You emerge into the storm, gasping for breath." << endl;
    cout << "You escape the mansion. Behind you, the zombies' cries slowly fade." << endl;
    cout << "For tonight, the mansion has lost its grip on you." << endl;
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "That isn't a valid choice. Please try again." << endl;
    choice_basement();
  }
}