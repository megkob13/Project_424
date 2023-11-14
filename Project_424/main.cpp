// Final Project
// Presentation Date: 12/5/2023
// AERSP 424 Fall 2023
// Serin Santhosh and Megan O'Brien

//Choose Your Own Adventure - Life of a Senior in Aerospace Engineering @ PSU!

// include headerfiles and librarys to compile code
#include <iostream>
#include <string>
#include <vector>
#include "spacecraft.h"
#include "aircraft.h"

using namespace std;

//Struct used to hold user information
struct UserInfo
{
    string fname;
    string lname;
    
};

int main()
{
    int choice;
    UserInfo user;
    //collect information
    cout << "Please enter your first name: ";
    cin >> user.fname;
    
    cout << "Please enter your last name: ";
    cin >> user.lname;

    //start the game!
    cout << "Welcome to senior year in Aerospace Engineering at Penn State, " << user.fname << " " << user.lname << "!" << endl;
    cout << "Which capstone would you like to be in?" << endl;
    
    // use do while loop to make sure loop starts, and will check at the end if a valid choice was made, if not, will redo the loop again!
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
                //will go to the aircraft cpp file
            AircraftRoute();
            break;
        case 2:
            cout << endl;
            cout << "You selected Spacecraft" << endl;
                //will go to the spacecraft cpp file
            SpacecraftRoute();
            break;
        default:
            cout << endl;
            cout << "Invalid choice. Please enter a valid option." << endl;
                //start do while loop again!
        }
    } while (choice != 1 && choice != 2);

    return 0;
}
