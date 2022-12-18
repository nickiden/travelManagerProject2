//  FILE    :   main.cpp
//  Project :   TravelManagement
//  Programmer  :   Nick Iden
//  Date    :   Dec 19th, 2022
//  Comment :
//              A travel management system that will manage user data class,
//              Find destinations, and output the users travel information.
//              This Project is created to practice c++ organization, classes, and file                 management.

#include <iostream>
#include <fstream>
#include <iomanip>

 
using namespace std;


// Classs used in project

// class : Customers
// date  : Dec 19th, 2022
// comment : Contains all the attrubutes for the booking customers

class Customers
{
public:
    string name;
    string gender;
    string address;
    int age;
    string phone;
    int customerId;
    
    
    // method   : getDetails
    // comment  : Get input from user and store user details
    //
    void getDetails()
    {
        ofstream output("old-customers.txt", ios::app); //output file of customers
        {
            cout << "Enter Customer ID: ";
            cin >> customerId;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter phone number: ";
            cin >> phone;
            cout << "Enter Address: ";
            cin >> address;
            cout << "Enter Gender: ";
            cin >> gender;
        }
        
        
    }
    
};


// class : Booking
// date  : Dec 19th, 2022
// comment : Contains all the attrubutes for the booking

class Booking
{
    
};


// class : Charges
// date  : Dec 19th, 2022
// comment : Contains all the attrubutes for the prices.
class Charges
{
    
};


int main(int argc, const char * argv[]) {
   
    
    
    return 0;
}
