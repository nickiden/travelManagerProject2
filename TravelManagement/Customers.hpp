//
//  Customers.hpp
//  TravelManagement
//
//  Created by Nick Iden on 2023-01-05.
//

#ifndef Customers_hpp
#define Customers_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

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
    static int customerId;
    char allDeets[1000];
  
    
public:
    
    // create setter functions ###############################
    void setName(string n);
    
    void setGender(string g);
    
    void setAddress(string a);
   
    void setAge(int a);
   
    void setPhone(string p);
  
    void setCustId(int c);
 
    
    
    // create getters to access private variables ###################
    
    string getName();
    
    string getGender();
   
    string getAddress();
    
    int getAge();
    
    string getPhone();
    
    int getCustId();
   
    
    
    // method   : getDetails
    // comment  : Get input from user and store user details
    //
    void getDetails();
   
    
    // method   :   showDetails
    // comment  :
    //              Check if file is created, if so save in an array and display
    void showDetails();
   
  
    
};

#endif /* Customers_hpp */
