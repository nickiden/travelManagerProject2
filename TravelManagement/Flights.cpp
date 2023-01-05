//
//  Flights.cpp
//  TravelManagement
//
//  Created by Nick Iden on 2023-01-05.
//

#include "Flights.hpp"

using namespace std;

// class : flights
// date  : December 21st, 2022
// comment : manage the flight data for the booking

    
// mutator methods to change flight data
    void Flights::setFlightNum(int f)
    {
        if (f <= 0 || f > 2)
        {
            flightNum = 0;
        }
        else
        {
            flightNum = f;

        }
    }
    
    void Flights::setDistance(float d)
    {
        if (d <= 0)
        {
            distance = 0.00;
        }
        else
        {
            distance = d;

        }
    }
    
    void Flights::setPrice(float p)
    {
        if (p <= 0.00)
        {
            price = 0.00;
        }
        else
        {
            price = p;

        }
    }
    
    // acessor methods to access flight data
    
    int Flights::getFlightNum()
    {
        return flightNum;
    }
    
    float Flights::getDistance()
    {
        return distance;
    }
    
    float Flights::getPrice()
    {
        return price;
    }



    // class : flightDetails
    // date  : December 21st, 2022
    // comment : create the menu screen for flight options.
    
    void Flights::flightDetails()
    {
        int flightBuff = 0;
        float distBuff = 0.0;
        float ecoCost = .45;
        float firstClCost = .75;
        int flightChoice = 0;
        float costTotal = 0.00;
        int optConfirm = 0;
        
        cout << "Looking for the best prices on flights? Look no further!!!! "<< endl;
        cout << "-------------- Cheap Flights Co. ------------------" << endl;
        cout << "1. Fly Econo class for $ .45 US a km" << endl;
        cout << "2. Fly First class for $ .75 US " << endl;
        
        
        // get user input
        cout << "\n To calculate the cost of your jurney" << endl;
        cout << "Enter class you would like to fly (Option 1 or 2): ";
        cin >> flightBuff;
        setFlightNum(flightBuff);
        
        flightChoice = getFlightNum();
        
        cout << "Enter the Kilometers you would like to fly: ";
        cin >> distBuff;
        setDistance(distBuff);
       
        if(flightChoice == 1)
        {
            costTotal = distBuff * ecoCost;
            cout << "Your Total cost for Econo class is $" << costTotal<< endl;
            cout << "Press 1 to confirm: or";
            cout << "Press 2 for more options: ";
            cin >> optConfirm;
            
            // confirm option selected by user
            if(optConfirm == 1)
            {
                setPrice(costTotal);
                cout << "\nYou are booked for your flight. Go to main menu for recipt. "<< endl;
                
            }
            else if(optConfirm == 2)
            {
                flightDetails(); // back to menu
            }
            else
            {
                cout << "Invalid option" << endl; // sleep redirect to previous menu.
                menu();
                
            }
           
        }
        else if(flightChoice == 2)
        {
            costTotal = distBuff * firstClCost;
            cout << "Your Total cost for First class is $" << costTotal<< endl;
            cout << "Press 1 to confirm: or";
            cout << "Press 2 for more options: ";
            cin >> optConfirm;
            
            // confirm option selected by user
            if(optConfirm == 1)
            {
                setPrice(costTotal);
                cout << "\nYou are booked for your flight. Go to main menu for recipt. "<< endl;
                
            }
            else if(optConfirm == 2)
            {
                flightDetails(); // back to menu
            }
            else
            {
                cout << "Invalid option" << endl; // sleep redirect to previous menu.
                menu();
                
            }
        }
        else
        {
            cout << "Sorry, invalid option selected" << endl;
            cout << "Press 2 for more options: ";
            cin >> optConfirm;
        }
        
       
        
        cout << "\nPress 1 to reDirect to main menu: ";
        cin >> flightChoice;
        system("clear");
        cout<< "---------Back to menu-----------" << endl;
        
        if(flightChoice == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
    

