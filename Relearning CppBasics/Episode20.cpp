/*
#include <iostream>

using namespace std;

//Reference variables can be changed inside a function and that changes them outside the function.
//Arrays are always/automatically reference variables.

void SaySomething(int &word) {

	word = word * 6;

	cout << "here is the magic word: " << word << endl;
}

void ChangeName(string &name, string newname);
void tripleArray(int coolArray[], int size);

int main() {

	//Scope is where a variable can be accessed.

	int word = 15;

	SaySomething(word);

	//Will return 15 since it is outside of scope.
	//Added ampersand to function, and now it changes the variable outside of scope too.
	//Think of it is non-reference passes the 'value'. Reference passes the variable itself.

	cout << word << endl;

	string name = "Shirley";

	cout << name << endl;

	ChangeName(name, "Bob");

	//Without reference variable, returns Shirley still. Change name to reference variable, boom.

	cout << name << endl;

	int arrayofCoolNumbers[5] = { 5, 3, 4, 12, 1 };

	tripleArray(arrayofCoolNumbers, 5);

	for (int i = 0; i < 5; ++i) {
		cout << arrayofCoolNumbers[i] << endl;
	}

	return 0;
}

void ChangeName(string &name, string NewName) {
	name = NewName;
}

void tripleArray(int coolArray[], int size) {
	for (int i = 0; i < size; ++i) {
		coolArray[i] = coolArray[i] * 3;
	}
}
*/