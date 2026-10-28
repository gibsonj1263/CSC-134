#include <iostream>
#include <limits>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
[Gibsonj]
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
void choice_upstairs();
void choice_basement();
// TODO: add your new prototypes here

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
  cout << "The windows glow with a cold, green light, and you hear dragging footsteps inside." << endl;
  cout << "Do you:" << endl;
  cout << "1. Push open the front door" << endl;
  cout << "2. Sneak in through the back" << endl;
  cout << "3. Run home before the zombies see you" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
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
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    main_menu(); // try again
  }
}

void choice_front_door() {
  cout << "You grab the front door handle, but the heavy iron chain is wrapped around it." << endl;
  cout << "The chain is rusted and locked tight, and the ancient wooden door won't budge." << endl;
  cout << "A zombie groans from inside the mansion, and you realize the front entrance is a trap." << endl;
  cout << "Do you:" << endl;
  cout << "1. Search the side of the mansion for another entrance" << endl;
  cout << "2. Run home before the zombies notice you" << endl;
  int choice = 0;
  cout << "Choose: ";
  cin >> choice;
  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "That's not a valid choice, please try again." << endl;
    choice_front_door();
    return;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    choice_front_door();
  }
}

void choice_back_door() {
  cout << "You slip around the back of the mansion." << endl;
  cout << "A cracked window hangs open, and you hear moaning from somewhere deep inside." << endl;
  cout << "Do you:" << endl;
  cout << "1. Climb inside and investigate" << endl;
  cout << "2. Run home before the zombies catch you" << endl;
  cout << "Choose: ";

  int choice = 0;
  cin >> choice;
  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "That's not a valid choice, please try again." << endl;
    choice_back_door();
    return;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    cout << "You slip inside and hear the mansion groan around you." << endl;
    cout << "A crowd of zombies shuffles from the hallway." << endl;
    choice_hallway();
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    choice_back_door();
  }
}

void choice_hallway() {
  cout << "The zombies turn toward you and begin closing in." << endl;
  cout << "Do you:" << endl;
  cout << "1. Dodge into a shadowy alcove and let them pass" << endl;
  cout << "2. Try to sprint past the zombies" << endl;
  cout << "Choose: ";

  int choice = 0;
  cin >> choice;
  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "That's not a valid choice, please try again." << endl;
    choice_hallway();
    return;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    cout << "You duck into the alcove just in time." << endl;
    cout << "The zombies shuffle past without noticing you." << endl;
    cout << "When the hallway is clear, you sneak toward a staircase deeper in the mansion." << endl;
    cout << "Do you:" << endl;
    cout << "1. Climb the stairs to the upper floor" << endl;
    cout << "2. Descend into the basement" << endl;
    cout << "Choose: ";

    int nextChoice = 0;
    cin >> nextChoice;
    if (cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "That's not a valid choice, please try again." << endl;
      choice_hallway();
      return;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (1 == nextChoice) {
      choice_upstairs();
    } else if (2 == nextChoice) {
      choice_basement();
    } else {
      cout << "That's not a valid choice, please try again." << endl;
      choice_hallway();
    }
  } else if (2 == choice) {
    cout << "The zombies block your way and surround you." << endl;
    cout << "You are trapped inside the mansion with the undead." << endl;
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    choice_hallway();
  }
}

void choice_go_home() {
  cout << "You bolt away from the mansion as thunder crashes overhead." << endl;
  cout << "You hear the zombies snarling and pounding on the doors behind you." << endl;
  cout << "You make it home just before sunrise, but you know the mansion is still waiting." << endl;
  cout << "The nightmare is over for now, but the zombies are still trapped inside." << endl;
}

void choice_upstairs() {
  cout << "You climb the stairs into a long upstairs hallway lined with cracked portraits." << endl;
  cout << "A soft voice whispers from behind a bedroom door, but the floorboards groan under your feet." << endl;
  cout << "Do you:" << endl;
  cout << "1. Open the bedroom door and investigate the voice" << endl;
  cout << "2. Run back down the stairs and leave the mansion" << endl;
  cout << "Choose: ";

  int choice = 0;
  cin >> choice;
  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "That's not a valid choice, please try again." << endl;
    choice_upstairs();
    return;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    cout << "You open the door and find a dusty nursery filled with broken toys." << endl;
    cout << "In the center of the room sits a rusted music box, still playing by itself." << endl;
    cout << "The melody fades, and the room goes silent. Something is waiting in the dark." << endl;
    cout << "You hear the zombies climbing the stairs behind you and realize the mansion has found you." << endl;
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    choice_upstairs();
  }
}

void choice_basement() {
  cout << "You descend into the basement, where the air is cold and the walls drip with black water." << endl;
  cout << "At the far end of the room, a steel door stands ajar, and a lantern flickers inside." << endl;
  cout << "Do you:" << endl;
  cout << "1. Step through the steel door" << endl;
  cout << "2. Sprint back upstairs and run away" << endl;
  cout << "Choose: ";

  int choice = 0;
  cin >> choice;
  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "That's not a valid choice, please try again." << endl;
    choice_basement();
    return;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    cout << "You push through the iron door and find a hidden tunnel carved into the earth." << endl;
    cout << "The tunnel leads outside, and you burst into the stormy night gasping for breath." << endl;
    cout << "You escape the mansion, but the sound of the zombies fades only slowly behind you." << endl;
    cout << "For tonight, the mansion loses its grip on you." << endl;
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    choice_basement();
  }
}