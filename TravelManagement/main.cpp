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

 
using namespace std;


// Classs used in project

// class : Customers
// date  : Dec 19th, 2022
// comment : Contains all the attrubutes for the booking customers

class Customers
{
private:
    
    string name;
    string gender;
    string address;
    int age;
    string phone;
    int customerId;
  
    
public:
    
    // create setter functions ###############################
    void setName(string n)
    {
        if (n == "") // check if string is empty
        {
            name = "N/A";
        }
        else
        {
            name = n;
        }
      
    }
    
    void setGender(string g)
    {
        if (g == "")
        {
            gender = "N/A";
        }
        else
        {
            gender = g;
        }
        
    }
    
    void setAddress(string a)
    {
        if (a == "")
        {
            address = "N/A";
        }
        else
        {
            address = a;
        }
        
    }
    
    void setAge(int a)
    {
        if (a <= 0)
        {
            age = 0;
        }
        else
        {
            age = a;
        }
        age = a;
    }
    
    void setPhone(string p)
    {
        if (p == "")
        {
            phone = "N/A";
        }
        else
        {
            phone = p;
        }
        
    }
    
    void setCustId(int c)
    {
        if (c <= 0)
        {
            customerId = 0;
        }
        else
        {
            customerId = c;

        }
    }
    
    
    // create getters to access private variables ###################
    
    string getName()
    {
        return name;
    }
    
    string getGender()
    {
        return gender;
    }
    
    string getAddress()
    {
        return address;
    }
    
    int getAge()
    {
        return age;
    }
    
    string getPhone()
    {
        return phone;
    }
    
    int getCustId()
    {
        return customerId;
    }
    
    
    
    
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
