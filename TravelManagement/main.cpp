//  FILE    :   main.cpp
//  Project :   TravelManagement
//  Programmer  :   Nick Iden
//  Date    :   Dec 19th, 2022
//  Comment :
//              A travel management system that will manage user data class,
//              Find destinations, and output the users travel information.
//              This Project is created to practice c++ organization, classes, and file management.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

#include "Customers.hpp"
#include "Flights.hpp"
#include "Bookings.hpp"
#include "Charges.hpp"

 
using namespace std;

// set declairations/prototypes
void menu();


// set static variables
int Customers::customerId;
float Flights::price;
float Booking::hotelCost;




int main(void) {
   
    menu();
    
    return 0;
}




// Function     : menu();
// Date         : January 2nd, 2023
// Comment      :
//          This Function sets the main menu and displays options for the user.
//          It creates all the objects needed for the program.

void menu()
{
    int mainChoice = 0;
    int CustChoice = 0;
    int goToMenu = 0;
    
    cout << "\t\t     * Travel Booking Service * \n" << endl;
    cout << "---------------------Main Menu------------------" << endl;
    
    cout << "\t______________________________________________" << endl;
    cout << "\t1. Customer Management" << endl;
    cout << "\t2. Flight Management" << endl;
    cout << "\t3. Booking Management" << endl;
    cout << "\t4. Billing" << endl;
    cout << "\t5. Exit" << endl;
    cout << "************************************************" << endl;
    
    cout << "\nEnter Your Selection: " << endl;
    cin >> mainChoice;
    
    system("clear");
    cout<< "---------Clearing Screen-----------" << endl;
    
    // create objects
    Customers customerMake;
    Flights flightMake;
    Booking bookingMake;
    Charges chargesMake;
    
    if(mainChoice == 1)
    {
        cout << "-------Customers---------\n" << endl;
        cout << "\t1. Enter New Customer" << endl;
        cout << "\t2. Show old customers" << endl;
        
        cout << "Enter Choice: " << endl;
        cin >> CustChoice;
        
        if(CustChoice == 1)
        {
            customerMake.getDetails();
        }
        else if(CustChoice == 2)
        {
            customerMake.showDetails();
        }
        else
        {
            cout << "Sorry that is invalid input, redirecting to previous menu" << endl;
            system("clear");
            menu();
        }
        
        cout << "\n Press 1 to redirect to main menu" << endl;
        cin >> goToMenu;
        system("clear");
        cout<< "---------Back to Main Menu-----------" << endl;
        
        if(goToMenu == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
        
    }
    
    else if(mainChoice == 2)
    {
        flightMake.flightDetails();
    }
    else if(mainChoice == 3)
    {
        bookingMake.hotels();
    }
    else if(mainChoice == 4)
    {
        chargesMake.printBill();
        chargesMake.showBill();
        
        cout << "Press 1 to go back to main menu: " << endl;
        cin >> goToMenu;
        if(goToMenu)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
    else if(mainChoice == 5)
    {
        
        system("clear");
        cout<< "---------Goodbye-----------" << endl;
        exit(0);
        
        
    }
    
    
    
}

