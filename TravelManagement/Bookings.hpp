//
//  Bookings.hpp
//  TravelManagement
//
//  Created by Nick Iden on 2023-01-05.
//

#ifndef Bookings_hpp
#define Bookings_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

using namespace std;


// class : Booking
// date  : Dec 19th, 2022
// comment : Contains all the attrubutes for the booking. This will also have the
//           Methods to handle the hotal package options menu.

class Booking
{
    
private:
    int hotelChoice;
    int packChoice;
    static float hotelCost;
    
public:
    // mutators and accessors for the booking class.
    void setHotelChoice(int h);
  
    void setPackChoice(int p);
   
    void setHotelPrice(float p);
  
    
    // acessor methods to access hotel data
    
    int getHotelChoice();
    
    int getPackChoice();
    
    float gethotelPrice();
    
    
    
    // Method   : hotels()
    // Date     : Dec 23rd, 2022
    // Comment  :
    //
    void hotels();
    
    
};


#endif /* Bookings_hpp */
