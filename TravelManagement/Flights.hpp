//
//  Flights.hpp
//  TravelManagement
//
//  Created by Nick Iden on 2023-01-05.
//

#ifndef Flights_hpp
#define Flights_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

// set declairations/prototypes
void menu();

// class : flights
// date  : December 21st, 2022
// comment : manage the flight data for the booking
class Flights
{
private:
    int flightNum;
    float distance;
    static float price;
    
public:
    
// mutator methods to change flight data
    void setFlightNum(int f);
  
    
    void setDistance(float d);
   
    
    void setPrice(float p);
  
    
    // acessor methods to access flight data
    
    int getFlightNum();
    
    
    float getDistance();
   
    
    float getPrice();
    
    
    void flightDetails();
    
};


#endif /* Flights_hpp */
