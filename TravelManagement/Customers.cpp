//
//  Customers.cpp
//  TravelManagement
//
//  Created by Nick Iden on 2023-01-05.
//

#include "Customers.hpp"
using namespace std;


// Classs used in project

// class : Customers
// date  : Dec 19th, 2022
// comment : Contains all the attrubutes for the booking customers

    

    
    // create setter functions ###############################
    void Customers::setName(string n)
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
    
    void Customers::setGender(string g)
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
    
    void Customers::setAddress(string a)
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
    
    void Customers::setAge(int a)
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
    
    void Customers::setPhone(string p)
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
    
    void Customers::setCustId(int c)
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
    
    string Customers::getName()
    {
        return name;
    }
    
    string Customers::getGender()
    {
        return gender;
    }
    
    string Customers::getAddress()
    {
        return address;
    }
    
    int Customers::getAge()
    {
        return age;
    }
    
    string Customers::getPhone()
    {
        return phone;
    }
    
    int Customers::getCustId()
    {
        return customerId;
    }
    
    
    
    
    // method   : getDetails
    // comment  : Get input from user and store user details
    //
    void Customers::getDetails()
    {
        ofstream output("old-customers.txt", ios::app); //output file of customers
        {
            cout << "Enter Customer ID: ";
            cin >> customerId;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Gender: ";
            cin >> gender;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter phone number: ";
            cin >> phone;
            cout << "Enter Address: ";
            getline (cin,address);
            
        }
        
        output << "\nCustomer ID: " << customerId << "\nName: " << name << "\nAge: " << age << "\nPhone" << phone << "\nAddress: " << address << "\nGender: " << gender << endl;
        
        output.close(); // close stream
        
        cout << "\nSAVED \n"<<endl;
    }
    
    // method   :   showDetails
    // comment  :
    //              Check if file is created, if so save in an array and display
    void Customers::showDetails()
    {
        ifstream input("old-customers.txt");
        {
            // check that there is an input
            if(!input)
            {
                cout << "Sorry, File Error"<< endl;
            }
            while((!(input.eof()))) // loop through file print contents
            {
                input.getline(allDeets,1000);
                cout << allDeets << endl;
            }
            input.close();  // close stream
            
        }
    }
  
    

