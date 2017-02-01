#include <iostream>
#include <string>
using namespace std;
int main() {
	char input;
	string name;
	cout << "Hello again......um can you tell me your name again" << endl;
	cin >> name;
	cout << "thank you. Hello again, " << name << endl << endl;
	cout << "Good news, everyone! The creator has learned about strings and if-statments." << endl << endl;
	cout << "it basically means that you can ask questions and i can remember your name." << endl << endl;
	cout << "........however I can only awnser questions whit y/n" << endl << endl;
	cout << "Say hello?" << endl;
	cin >> input;
	if (input == 'y')
		cout << "hello, " << name << endl;
	else
		cout << "es verfolgt mich..." << endl;
}