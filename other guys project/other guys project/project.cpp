#include <iostream>
using namespace std;
int main() {
	char input = 'a';//initalized with dummy value
	int room = 1;

	while (input != 'q') { //game loop
		switch (room) {//sends us to a room
		case 1:
			cout << "you're in room 1! you can go south" << endl;
			cin >> input;
			if (input == 's')
				room = 11;
			break;
		case 2:
			cout << "you're in room 2! you can go east or south " << endl;
			cin >> input;
			if (input == 'e')
				room = 1;
			else	if (input == 's')
				room = 4;
			break;
		case 3:
			cout << "you're in room 3! you could go west" << endl;
			cin >> input;
			if (input == 'w')
				room = 1;
			if (input == 's')
				room = 5;

		}
	}
}