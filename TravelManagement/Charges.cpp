//
//  Charges.cpp
//  TravelManagement
//
//  Created by Nick Iden on 2023-01-05.
//

#include "Charges.hpp"

// class : Charges
// date  : Dec 19th, 2022
// comment : inherits from all the other classess to gather costs and create
//          the final bill for customer.

    
    // Method   :   printBill()
    // Date     :   December 27th, 2022
    // Comment  :
    //              Called to print bill
    //
    void Charges::printBill()
    {
        
        int printId = getCustId();
        float printHotelPrice = gethotelPrice();
        float printFlightPrice = getPrice();
        
        
        ofstream outf("receipt.txt");
        {
            outf << "-----------Booking Agency-----------" << endl;
            outf << "---------------Recept---------------" << endl;
            outf << "____________________________________" << endl;
            
            outf << "Customer Id:" << printId << endl << endl;
            outf << "Description\t\t Total" << endl;
            outf << "Hotel Cost\t\t " << fixed << setprecision(2) << printHotelPrice << endl << endl;
            outf << "Flight Cost\t\t " << fixed << setprecision(2) << printFlightPrice << endl << endl;
            
            outf << "____________________________________" << endl;
            outf << "Total Charge\t\t" << setprecision(2) << printHotelPrice+printFlightPrice << endl;
            outf << "____________________________________" << endl;
            outf << "-----------Thank you ---------------" << endl;
        }
        
        outf.close();
    }


    // Method   :   showBill()
    // Date     :   Jan 3rd, 2023
    // Comment  :
    //              Display bill created by printBill()
    //

    void Charges::showBill()
    {
        ifstream inf("receipt.txt");
        {
            if(!inf)
            {
                cout << "Unable to open file!"<< endl;
            }
            
            while(!(inf.eof()))
            {
                inf.getline(all,999);
                cout << all << endl;
                
            }
        }
    }
