/*
#include <iostream>

using namespace std;

int main() {

	//If Statements - control the flow

	int age;
	cout << "Whats your age? ";
	cin >> age;

	if (age >= 18)
	{
		cout << "oh wow!! you are of legal age for a beer. Here you go." << endl;
		cout << "*gives beer*" << endl;
	}
	else
	{
		cout << "You are not old enough for a beer. Go away." << endl;
	}

	int number = 3;
	if (number > 0) 
	{
		cout << "The number is positive." << endl;
	}
	else
	{
		cout << "the number is negative or zero." << endl;
	}

	//can nest if statements

	string answer;
	cout << "Do you want a beer? yes or no" << endl;
	cin >> answer;
	if (answer == "yes")
	{
		cout << "Whats your age? ";
		cin >> age;
		if (age >= 18)
		{
			cout << "oh wow!! you are of legal age for a beer. Here you go." << endl;
			cout << "*gives beer*" << endl;
		}
		else
		{
			cout << "You are not old enough for a beer. Go away." << endl;
		}
	}
	else
	{
		cout << "Good Choice." << endl;
	}

	//can also have multiple conditions
	int score;
	cout << "What score did you get?" << endl;
	cin >> score;

	if (score == 0)
	{
		cout << "Wow you suck" << endl;
	}
	else if (score >= 1000)
	{
		cout << "You beat the high score!" << endl;
	}
	else
	{
		cout << "Try again!" << endl;
	}

	return 0;
} */