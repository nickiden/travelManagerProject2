//
//  Bookings.cpp
//  TravelManagement
//
//  Created by Nick Iden on 2023-01-05.
//

#include "Bookings.hpp"
#include "Flights.hpp"

// class : Booking
// date  : Dec 19th, 2022
// comment : Contains all the attrubutes for the booking. This will also have the
//           Methods to handle the hotal package options menu.


    // mutators and accessors for the booking class.
    void Booking::setHotelChoice(int h)
    {
        if (h <= 0)
        {
            hotelChoice = 0;
        }
        else
        {
           hotelChoice = h;

        }
    }
    
    void Booking::setPackChoice(int p)
    {
        if (p <= 0)
        {
           packChoice= 0;
        }
        else
        {
            packChoice = p;

        }
    }
    
    void Booking::setHotelPrice(float p)
    {
        if (p <= 0.00)
        {
            hotelCost = 0.00;
        }
        else
        {
            hotelCost = p;

        }
    }
    
    // acessor methods to access hotel data
    
    int Booking::getHotelChoice()
    {
        return hotelChoice;
    }
    
    int Booking::getPackChoice()
    {
        return packChoice;
    }
    
    float Booking::gethotelPrice()
    {
        return hotelCost;
    }
    
    
    // Method   : hotels()
    // Date     : Dec 23rd, 2022
    // Comment  :
    //
    void Booking::hotels()
    {
        int hotelBuff = 0;
        int packageBuff = 0;
        int goMenu;
        string hotelNo[] = {" Best Western", " The Delta", " The Hilton"};
        
        
        // loop through the hotel options
        for(int i = 0; i < 3; i++ )
        {
            cout << (i + 1) << ". Hotel" << hotelNo[i] << endl;
            
        }
        
        cout << "\nCurrently we are working with these top hotels" << endl;
        cout << "Press any key to go back or Enter the number of Hotel: " << endl;
        cin >> hotelBuff;
        setHotelChoice(hotelBuff);
        
        system("clear");
        cout<< "---------Back to menu-----------" << endl;
        
        // manage hotel choices
        if(hotelChoice == 1)
        {
            cout << "------------- Welcome to the Best Western Hotel!!! -------\n" << endl;
            cout << "Packages we offer: \n" << endl;
            
            cout << "1. Standard Package starting at $1000" << endl;
            cout << "2. Premium Package starting at $5000" << endl;
            cout << "3. Luxury Package starting at 10000" << endl;
            
            cout << "\nSelect an option number above or press any other key to return to previous menu: " << endl;
            cin >> packageBuff;
            setPackChoice(packageBuff);
            
            // print out package selection otions
            int newPacChoice = getPackChoice();
            
            if(newPacChoice == 1)
            {
                setHotelPrice(1000.00);
                
                cout << " \nYou have booked your Standard reservation at the Best Western" << endl;
            }
            else if(newPacChoice == 2)
            {
                setHotelPrice(5000.00);
                
                cout << " \nYou have booked your Premium reservation at the Best Western" << endl;
            }
            else if(newPacChoice == 3)
            {
                setHotelPrice(10000.00);
                
                cout << " \nYou have booked your Luxury reservation at the Best Western" << endl;
                
            }
            else
            {
                cout << "Sorry that is invalid input, redirecting to previous menu" << endl;
                system("clear");
                hotels();
            }
            
            cout << "\nPress 1 to reDirect to main menu: ";
            cin >> goMenu;
            system("clear");
            cout<< "---------Back to menu-----------" << endl;
            
            if(goMenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        
        else if(hotelChoice == 2)
        {
            cout << "------------- Welcome to the Delta Hotel!!! -------\n" << endl;
            cout << "Packages we offer: \n" << endl;
            
            cout << "1. Standard Package starting at $500" << endl;
            cout << "2. Premium Package starting at $1000" << endl;
            cout << "3. Luxury Package starting at 2000" << endl;
            
            cout << "\nSelect an option number above or press any other key to return to previous menu: " << endl;
            cin >> packageBuff;
            setPackChoice(packageBuff);
            
            // print out package selection otions
            int newPacChoice = getPackChoice();
            
            if (newPacChoice == 1)
            {
                setHotelPrice(500.00);
                
                cout << " \nYou have booked your Standard reservation at the Delta" << endl;
            }
            else if (newPacChoice == 2)
            {
                setHotelPrice(1000.00);
                
                cout << " \nYou have booked your Premium reservation at the Delta" << endl;
            }
            else if (newPacChoice == 3)
            {
                setHotelPrice(2000.00);
                
                cout << " \nYou have booked your Luxury reservation at the Delta" << endl;
                
            }
            else
            {
                cout << "Sorry that is invalid input, redirecting to previous menu" << endl;
                system("clear");
                hotels();
            }
            
            cout << "\nPress 1 to reDirect to main menu: ";
            cin >> goMenu;
            system("clear");
            cout<< "---------Back to main menu-----------" << endl;
            
            if(goMenu == 1)
            {
               menu();
            }
            else
            {
                menu();
            }
        }
        else if(hotelChoice == 3)
        {
            cout << "------------- Welcome to The Hilton!!! -------\n" << endl;
            cout << "Packages we offer: \n" << endl;
            
            cout << "1. Standard Package starting at $1500" << endl;
            cout << "2. Premium Package starting at $5500" << endl;
            cout << "3. Luxury Package starting at 15000" << endl;
            
            cout << "\nSelect an option number above or press any other key to return to previous menu: " << endl;
            cin >> packageBuff;
            setPackChoice(packageBuff);
            
            // print out package selection otions
            int newPacChoice = getPackChoice();
            
            if(newPacChoice == 1)
            {
                setHotelPrice(1500.00);
                
                cout << " \nYou have booked your Standard reservation at the Hilton" << endl;
            }
            else if(newPacChoice == 2)
            {
                setHotelPrice(5500.00);
                
                cout << " \nYou have booked your Premium reservation at the Hilton" << endl;
            }
            else if(newPacChoice == 3)
            {
                setHotelPrice(15000.00);
                
                cout << " \nYou have booked your Luxury reservation at the Hilton" << endl;
                
            }
            else
            {
                cout << "Sorry that is invalid input, redirecting to previous menu" << endl;
                system("clear");
                hotels();
            }
            
            cout << "\nPress 1 to reDirect to main menu: ";
            cin >> goMenu;
            system("clear");
            cout<< "---------Back to main menu-----------" << endl;
            
            if(goMenu == 1)
            {
               menu();
            }
            else
            {
                menu();
            }
        }
         
        
    }

