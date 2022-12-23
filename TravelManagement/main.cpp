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
    char allDeets[1000];
  
    
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
        output << "\nCustomer ID: " << customerId << "\nName: " << name << "\nAge: " << age << "\nPhone" << phone << "\nAddress: " << address << "\ngender: " << gender << endl;
        
        output.close(); // close stream
        
        cout << "\nSAVED \n"<<endl;
    }
    
    // method   :   showDetails
    // comment  :
    //              Check if file is created, if so save in an array and display
    void showDetails()
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
  
    
};

// class : flights
// date  : December 21st, 2022
// comment : manage the flight data for the booking
class flights
{
private:
    int flightNum;
    int distance;
    float price;
    
public:
    
// mutator methods to change flight data
    void setFlightNum(int f)
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
    
    void setDistance(int d)
    {
        if (d <= 0)
        {
            distance = 0;
        }
        else
        {
            distance = d;

        }
    }
    
    void setPrice(float p)
    {
        if (p <= 0)
        {
            price = 0;
        }
        else
        {
            price = p;

        }
    }
    
    // acessor methods to access flight data
    
    int getFlightNum()
    {
        return flightNum;
    }
    
    int getDistance()
    {
        return distance;
    }
    
    float getPrice()
    {
        return price;
    }
    
    void flightDetails()
    {
        int flightBuff = 0;
        int distBuff = 0;
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
        
        cout << "Enter the Kilometers you would like to fly: ";
        cin >> distBuff;
        setDistance(distBuff);
        cin >> distance;
        
        if(flightChoice == 1)
        {
            costTotal = distBuff * ecoCost;
            cout << "Your Total cost for Econo class is $" << costTotal<< endl;
            cout << "Press 1 to confirm: or";
            cout << "Press 2 for more options: ";
            cin >> optConfirm;
            
            system("CLS");
        }
        else if(flightChoice == 2)
        {
            costTotal = distBuff * firstClCost;
            cout << "Your Total cost for Econo class is $" << firstClCost<< endl;
            cout << "Press 1 to confirm: or";
            cout << "Press 2 for more options: ";
            cin >> optConfirm;
        }
        else
        {
            cout << "Sorry, invalid option selected" << endl;
            cout << "Press 2 for more options: ";
            cin >> optConfirm;
        }
        
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
            // menu();
            
        }
        
        cout << "\nPress 1 to reDirect to main menu: ";
        cin >> flightChoice;
        system("CLS");
        
        if(flightChoice == 1)
        {
           // menu();
        }
        else
        {
            //menu();
        }
    }
    
};


// class : Booking
// date  : Dec 19th, 2022
// comment : Contains all the attrubutes for the booking

class Booking
{
    
private:
    int hotelChoice;
    int packChoice;
    float hotelCost;
    
    // mutators and accessors for the booking class.
    void setHotelChoice(int h)
    {
        if (h <= 0 || h > 2)
        {
            hotelChoice = 0;
        }
        else
        {
           hotelChoice = h;

        }
    }
    
    void setPackChoice(int p)
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
    
    void setHotelPrice(float p)
    {
        if (p <= 0)
        {
            hotelCost = 0;
        }
        else
        {
            hotelCost = p;

        }
    }
    
    // acessor methods to access hotel data
    
    int getHotelChoice()
    {
        return hotelChoice;
    }
    
    int getPackChoice()
    {
        return packChoice;
    }
    
    float gethotelPrice()
    {
        return hotelCost;
    }
    
    
    // Method   : hotels()
    // Date     : Dec 23rd, 2022
    // Comment  :
    //
    void hotels()
    {
        int hotelBuff = 0;
        string hotelNo[] = {"Best Western", "The Delta", "The Hilton"};
        
        // loop through the hotel options
        for(int i = 0; i < 3; i++ )
        {
            cout << (i + 1) << ".Hotel" << hotelNo[i] << endl;
            
        }
        
        cout << "\nCurrently we are working with these top hotels" << endl;
        cout << "Press any key to go back or Enter the number of Hotel: " << endl;
        cin >> hotelBuff;
        setHotelChoice(hotelBuff);
        
        system("CLS");
        
        // manage hotel choices
        if(hotelChoice == 1)
        {
            
        }
        
        
    }
    
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
