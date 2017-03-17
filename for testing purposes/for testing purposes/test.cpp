#include <iostream>
#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
char file = 'a';
void candy();//declaration
string inventory[4];
int main() {
	srand(time(NULL));
	int room = 8;
	string input;
	for (int i = 0; i < 4; i++) {
		inventory[i] = "";
	}
	while (file != 'q') {
		switch (room) {
		case 1:
			cout << "dodos" << endl << endl;
			system("pause");
			cout << "dodos everywhere." << endl << endl;
			system("pause");
			cout << "You look around and see and ocean in front of you." << endl;
			cout << "the smell of ocean water fills the air" << endl;
			cout << "behind you there is a giant forest. To the west is more beach." << endl << endl;
			system("pause");
			cout << "there are three paths you can take: South, North or West" << endl;
			getline(cin, input);
			if (input.compare("go south") == 0)
				room = 3;
			else if (input.compare("go north") == 0)
				room = 2;
			else if (input.compare("go west") == 0)
				room = 4;
			else
				cout << "Nothing happens. What did you expect?" << endl;
			break;


		case 2:
			cout << "you find yourself in a forest." << endl << endl;
			cout << "Go where? South(s), North(n) or West(w)." << endl;
			getline(cin, input);
			if (input.compare("go south") == 0)
				room = 1;
			else if (input.compare("go north") == 0)
				room = 5;
			else if (input.compare("go west") == 0)
				room = 8;
			else
				cout << "you stand around like and idiot.(not a command)" << endl << endl;
			break;


		case 3:
			file = 'q';
			cout << "As you walk toward the ocean a giant sharktapus grabs you and pulls you under." << endl << endl << endl;
			break;


		case 4:
			cout << "more beach, more dingos." << endl;
			cout << "Go where? East, North, West or Invesigate." << endl;
			getline(cin, input);
			if (input.compare("go east") == 0)
				room = 1;
			else if (input.compare("go north") == 0)
				room = 8;
			else if (input.compare("go west") == 0)
				room = 6;
			else if (input.compare("investigate") == 0) {
				cout << "you find a new looking gumball machine and turn the handle." << endl << endl;
				candy();
			}// if statement

			else
				cout << "you stare at the ocean. in the distance you see what looks like a bloody vollyball." << endl;
			break;


		case 5:
			cout << "You come across a clearing in the forest." << endl << endl << endl;
			cout << "there seems to be a small structure in the distance, but your not sure." << endl;
			cout << "Go where? East, North or South" << endl;
			getline(cin, input);
			if (input.compare("go east") == 0)
				room = 10;
			else if (input.compare("go north") == 0)
				room = 7;
			else if (input.compare("go south") == 0)
				room = 2;
			else
				cout << "you sit there and try to remeber how you ended up on this island. for some reason you start to cry." << endl;
			break;


		case 6:
			cout << "as you wander the beach you come across a glossy orb." << endl;
			cout << "Go where? East, North or Examine orb" << endl;
			getline(cin, input);
			if (input.compare("go east") == 0)
				room = 4;
			else if (input.compare("go north") == 0)
				room = 9;
			else if (input.compare("examine orb") == 0) {
				if (inventory[1].compare("Bendy's Head")=0)
					room = 11;
				else
					cout << "you just stare into the glossy orb" << endl << endl;
			}
			else
				cout << "as you stare into the orb you start to feel a strange pressure in your chest" << endl;
			break;


		case 7:
			cout << "you find a lone cabin" << endl << endl;
			cout << "As you walk in you a greeted by a beautiful woman." << endl << endl;
			cout << "approch?" << endl;
			getline(cin, input);
			if (input.compare("yes"))
				room = 12;
			else if (input.compare("no") == 0) {
				cout << "you decide to back out of the cabin to explore more. She had a sad look on her face as you left." << endl;
				room = 5;
			}
			else
				cout << "I don't understand that command!" << endl;
			break;


		case 8:
			cout << "You decide to walk into more forest." << endl << endl;
			cout << "As you continue to walk you see what looks like a charizard flying overhead." << endl << endl;
			cout << "Go where? South, East, West or Search." << endl;
			getline(cin, input);
			if (input.compare("go south") == 0)
				room = 4;
			else if (input.compare("go east") == 0)
				room = 2;
			else if (input.compare("go west") == 0)
				room = 9;
			else if (input.compare("search") == 0)
				cout << "You find nothing while searching the area" << endl << endl;
			else if (input.compare("go north") == 0) {
				cout << "You encountered a wild, rabid chocobo!" << endl;
				getline(cin, input);
				if (input.compare("go back") == 0) {
					cout << "you managed to escape" << endl << endl;
				}
				else {
					cout << "The rabid beast swallowed you in one gulp" << endl;
					file = 'q';
				}
			}
			break;


		case 9:
			cout << "A giant crab emerges from the water and snips you in half." << endl;
			file = 'q';
			break;

		case 10:
			cout << "Upon going east you find youslef in a bear cave." << endl << endl;
			cout << "The bear, without hesitation, mauls you to death" << endl;
			file = 'q';
			break;

		case 11:
			cout << "You suddenly appear in room with a giant glass tube in the middle" << endl << endl;
			cout << "two red glowing circles emerge from the glass prison. Not angry, Not startled, not even a blink." << endl << endl;
			system("pause");
			cout << "They just stare." << endl << endl;
			cout << "there is a white door on the other side of the room. Go through it? Yes/No" << endl;
			getline(cin, input);
			if (input.compare("yes") == 0) {
				cout << "You walk through the door and wake up" << endl << endl;
				file = 'q';
			}
			if (input.compare("no") == 0) {
				cout << "guards burst in and start shooting" << endl << endl;
				file = 'q';
			}
			else {
				cout << "guards burst in and start shooting" << endl << endl;
				file = 'q';
			}
			break;

		case 12:
			for (int i = 0; i<4; i++)
				Beep(400, 600 + i);
			cout << "you wake up in a cold sweat" << endl;
			cout << "Its 7:30AM" << endl;
			cout << "as you get ready to leave you realize you have insane dreams" << endl;
			system("pause");
			file = 'q';
			break;
		}//switch
	}//while
	MessageBox(0, "Thanks for playing!", "Thanks again", MB_OK);
}// main



void candy() {// definition
			  //cout << "flag1";
	int number = rand() % 100 + 1;
	if (number < 30) {
		cout << "you were given a green gumball." << endl << endl;
		cout << "as you chew you begin to feel dizzy. It was filled with poison." << endl << endl;
		file = 'q';
		system("pause");
	}//if statment
	if (number > 30 && number < 80) {
		cout << "you are given a white gumball" << endl << endl;
		cout << " tastes like vanilla!" << endl << endl;
		system("pause");
	}// if statment
	if (number > 80 && number < 101) {
		cout << "you got a compass pointing to a nearby ink pile" << endl << endl;
		cout << "Obtained Bendy's Head!" << endl << endl;
		inventory[1] = "Bendy's Head";
		system("pause");
	}//if statment
}//end of definition