#include <iostream>
#include <string>
#include <vector>
#include "aircraft.h"
#include "spacecraft.h"

using namespace std;

//use class quiz to call the same quiz for different choices!
class Quiz_AirCraft{
public:

    void Quiz_Time_Air(float& grade_air)
    {
        bool answer_2;
        cout << "You got a popquiz! Are you ready? " << endl;
        cout << "Is the thermal efficiency a ratio of the rate of addition of kinetic energy to the propellant to the total energy consumption rate?" << endl;
        cout << "Use 1 for true and 0 for false" << endl;
        cin >> answer_2;
        
        if (answer_2 == 1)
        {
            grade_air = 100.0;
            cout << "You got the correct answer great job!" << endl;
            cout << "You got a " << grade_air << " on your quiz!" << endl;
            cout << "You can continue your journey!" << endl;
        }
        else if (answer_2 == 0)
        {
            grade_air = 75.5;
            cout << "Oh no! You answered incorrectly..." << endl;
            cout << "Luckily a friend checked your work and caught your mistake!" << endl;
            cout << "You got a " << grade_air << " on your quiz!" << endl;
        }
        else
        {
            grade_air = 0.0;
            cout << "You did not follow instructions and got the question wrong" << endl;
            cout << "You got a " << grade_air << " on your quiz!" << endl;
            
            //will return the user back to start
            cout << "START OVER." << endl;
            cout << endl;
            cout << endl;

            int choice_restart4;
            cout << "Welcome to senior year in Aerospace Engineering at Penn State!" << endl;
            cout << "Which capstone would you like to be in?" << endl;
            do
            {
                cout << "1. Aircraft" << endl;
                cout << "2. Spacecraft" << endl;

                cout << "Enter your choice: " << endl;
                cin >> choice_restart4;

                switch (choice_restart4)
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
            } while (choice_restart4 != 1 && choice_restart4 != 2);
        }
    }
};

Quiz_AirCraft obj;

void AircraftRoute()
{
    int choice_club;
    cout << endl;
    cout << endl;
    
    //start choices again
    cout << "What club would you like to join?" << endl;
   
    // loop for check of choices
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


void Aerowomen_1(float&grade_air)
{
    // add a quiz here
    obj.Quiz_Time_Air(grade_air);
    
    cout << "You got a " << grade_air << "% in the pop quiz!" << endl;
    
    int choice_hike;
    cout << endl;
    cout << endl;
    cout << "The club is going on a hike, but you really need to study for your AERSP 410 exam!" << endl;
    cout << "What do you do?" << endl;

    // allow user to pick what they are going to do with user input
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
    
    // add a quiz here
    //obj.Quiz_Time_Air();
    
    cout << "You need to study for AERSP 410, but your friends asked you to go out tonight." << endl;
    cout << "What do you do?" << endl;

    // allow user to pick what they are going to do with user input
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
    char lettergrade = 'A';
    int choice_career1;
    cout << endl;
    cout << endl;
    cout << "You got an " << lettergrade << "in Dr. Halls class! Great job! " << endl;
    cout << "Would you like to go to graduate school or into industry?   " << endl;
    
    // allow user to pick what they are going to do with user input
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
    char lettergrade = 'B';
    int choice_career2;
    cout << endl;
    cout << endl;
    cout << "You got a " << lettergrade << " in Dr. Halls class, and you got to network with other students and faculty. Not too shabby! Would you like to go to graduate school or into industry?" << endl;
    cout << "Would you like to go to graduate school or into industry?" << endl;

    // allow user to pick what they are going to do with user input
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
    //show results of the user's choices
    //here they failed so allow the user to start again!
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
