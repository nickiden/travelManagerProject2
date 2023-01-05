//
//  Charges.hpp
//  TravelManagement
//
//  Created by Nick Iden on 2023-01-05.
//

#ifndef Charges_hpp
#define Charges_hpp



#include <stdio.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

#include "Bookings.hpp"
#include "Flights.hpp"
#include "Customers.hpp"


using namespace std;

// class : Charges
// date  : Dec 19th, 2022
// comment : inherits from all the other classess to gather costs and create
//          the final bill for customer.
class Charges : public Booking, Flights, Customers
{
public:
    
    char all[999];
    
    
    
    // Method   :   printBill()
    // Date     :   December 27th, 2022
    // Comment  :
    //              Called to print bill
    //
    void printBill();
    
    
    // Method   :   showBill()
    // Date     :   Jan 3rd, 2023
    // Comment  :
    //              Display bill created by printBill()
    //
    
    void showBill();
 
    
};

#endif /* Charges_hpp */
