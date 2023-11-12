#include <iostream>
#include <string>
#include <vector>
#include "aircraft.h"
#include "spacecraft.h"

using namespace std;

void AircraftRoute()
{
	int choice_club;
	cout << endl;
	cout << endl;
	cout << "What club would you like to join?" << endl;
	do
	{
		cout << "1. Aerowomen" << endl;
		cout << "2. AIAA" << endl;

		cout << "Enter your choice: " << endl;
		cin >> choice_club;

		switch (choice_club)
		{
		case 1:
			cout << endl;
			cout << "Awesome! You joined Aerowomen." << endl;
			Aerowomen_1();
			break;
		case 2:
			cout << endl;
			cout << "Cool! You joined AIAA." << endl;
			AIAA_1();
			break;
		default:
			cout << endl;
			cout << "Invalid choice. Please enter a valid option." << endl;
		}
	} while (choice_club != 1 && choice_club != 2);
};


void Aerowomen_1()
{
	int choice_hike;
	cout << endl;
	cout << endl;
	cout << "The club is going on a hike, but you really need to study for your AERSP 410 exam!" << endl;
	cout << "What do you do?" << endl;

	do
	{
		cout << "1. Go on the hike." << endl;
		cout << "2. Study, study, study!" << endl;

		cout << "Enter your choice: " << endl;
		cin >> choice_hike;

		switch (choice_hike)
		{
		case 1:
			cout << endl;
			cout << "You go on the hike, it is lots of fun!" << endl;
			Hike_1();
			break;
		case 2:
			cout << endl;
			cout << "You stay home and study... you will go on a hike another time." << endl;
			Study_1();
			break;
		default:
			cout << endl;
			cout << "Invalid choice. Please enter a valid option." << endl;
		}
	} while (choice_hike != 1 && choice_hike != 2);
};

void AIAA_1()
{
	int choice_goingout;
	cout << endl;
	cout << endl;
	cout << "You need to study for AERSP 410, but your friends asked you to go out tonight." << endl;
	cout << "What do you do?" << endl;

	do
	{
		cout << "1. Go out with friends." << endl;
		cout << "2. Study, study, study!" << endl;

		cout << "Enter your choice: " << endl;
		cin >> choice_goingout;

		switch (choice_goingout)
		{
		case 1:
			cout << endl;
			cout << "You go out and have some fun!" << endl;
			Out_1();
			break;
		case 2:
			cout << endl;
			cout << "You stay home and study... you will go out another time." << endl;
			Study_1();
			break;
		default:
			cout << endl;
			cout << "Invalid choice. Please enter a valid option." << endl;
		}
	} while (choice_goingout != 1 && choice_goingout != 2);
};

void Study_1()
{
	int choice_career1;
	cout << endl;
	cout << endl;
	cout << "You got an A in Dr. Halls class! Great job! " << endl;
	cout << "Would you like to go to graduate school or into industry?   " << endl;

	do
	{
		cout << "1. Graduate School" << endl;
		cout << "2. Industry" << endl;

		cout << "Enter your choice: " << endl;
		cin >> choice_career1;

		switch (choice_career1)
		{
		case 1:
			cout << endl;
			cout << "The graduate school of your choice is impressed by your academic records, so you get accepted and graduate from undergrad at PSU. Congrats!" << endl;
			break;
		case 2:
			cout << endl;
			cout << "You have an interview and you impress them with your knowledge of propulsion. You get the job and graduate! Congrats!" << endl;
			break;
		default:
			cout << endl;
			cout << "Invalid choice. Please enter a valid option." << endl;
		}
	} while (choice_career1 != 1 && choice_career1 != 2);
};

void Hike_1()
{
	int choice_career2;
	cout << endl;
	cout << endl;
	cout << "You got a B in Dr. Halls class, and you got to network with other students and faculty. Not too shabby! Would you like to go to graduate school or into industry?" << endl;
	cout << "Would you like to go to graduate school or into industry?" << endl;

	do
	{
		cout << "1. Graduate School" << endl;
		cout << "2. Industry" << endl;

		cout << "Enter your choice: " << endl;
		cin >> choice_career2;

		switch (choice_career2)
		{
		case 1:
			cout << endl;
			cout << "Dr. Pritchett writes you a recommendation after learning more about you on the hike. You get accepted to graduate school and graduate from undergrad. Congrats!" << endl;
			break;
		case 2:
			cout << endl;
			cout << "Turns out, one of your new connections from the hike worked for your dream company. They refer you, you receive an offer, and you graduate from undergrad. Congrats!" << endl;
			break;
		default:
			cout << endl;
			cout << "Invalid choice. Please enter a valid option." << endl;
		}
	} while (choice_career2 != 1 && choice_career2 != 2);
};

void Out_1()
{
	cout << endl;
	cout << endl;
	cout << "Uh oh! You failed Dr. Halls class. Looks like you will have to retake it next fall." << endl;
	cout << "START OVER." << endl;
	cout << endl;
	cout << endl;

	int choice_restart1;
	cout << "Welcome to senior year in Aerospace Engineering at Penn State!" << endl;
	cout << "Which capstone would you like to be in?" << endl;
	do
	{
		cout << "1. Aircraft" << endl;
		cout << "2. Spacecraft" << endl;

		cout << "Enter your choice: " << endl;
		cin >> choice_restart1;

		switch (choice_restart1)
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
	} while (choice_restart1 != 1 && choice_restart1 != 2);

};