#include <iostream>
#include <string>
using namespace std;
int main() {
	int passcode;
	int code;
	string name;
	cout << "identify yourself" << endl;
	cin >> name;
	cout << "welcome, " << name << ".enter passcode" << endl;
	cin >> passcode;
	if (passcode == 777)
		cout << "entry log #1" << endl << "We recieved a request to research an interesting phenomenon today." << endl << "Apparently people all around have been experiencing a strange biological occurance in which they are able to move, make and destroy certain combinations of molecules. Some fire, some rock." << endl << "even stranger is that those that have had this expirence lose the need to eat or drink." << endl;
	else
		cout << "access denied" << endl << "terminating file" << endl;

}