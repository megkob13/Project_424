// Final Project 
// Presentation Date: 12/5/2023
// AERSP 424 Fall 2023
// Serin Santhosh and Megan O'Brien

//Choose Your Own Adventure - Life of a Senior in Aerospace Engineering @ PSU!

#include <iostream>
#include <string>
#include <vector>
#include "spacecraft.h"
#include "aircraft.h"


using namespace std;


int main()
{
	int choice; 
	string name;

	cout << "Please enter your first name." << endl;
	cin >> name;

	
	cout << "Welcome to senior year in Aerospace Engineering at Penn State, " << name << "!" << endl;
	cout << "Which capstone would you like to be in?" << endl;
	do
	{
		cout << "1. Aircraft" << endl;
		cout << "2. Spacecraft" << endl;

		cout << "Enter your choice: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << endl;
			cout << "You selected Aircraft" << endl;
			AircraftRoute();
			break;
		case 2:
			cout << endl;
			cout << "You selected Spacecraft" << endl;
			SpacecraftRoute();
			break;
		default:
			cout << endl;
			cout << "Invalid choice. Please enter a valid option." << endl;
		}
	} while (choice != 1 && choice != 2);

	return 0;
}



