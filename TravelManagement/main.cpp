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

// set declairations/prototypes
void menu();


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
        output << "\nCustomer ID: " << customerId << "\nName: " << name << "\nAge: " << age << "\nPhone" << phone << "\nAddress: " << address << "\nGender: " << gender << endl;
        
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
class Flights
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
            menu();
            
        }
        
        cout << "\nPress 1 to reDirect to main menu: ";
        cin >> flightChoice;
        system("CLS");
        
        if(flightChoice == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
    
};


// class : Booking
// date  : Dec 19th, 2022
// comment : Contains all the attrubutes for the booking. This will also have the
//           Methods to handle the hotal package options menu.

class Booking
{
    
private:
    int hotelChoice;
    int packChoice;
    float hotelCost;
    
public:
    // mutators and accessors for the booking class.
    void setHotelChoice(int h)
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
        int packageBuff = 0;
        int goMenu;
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
                setHotelChoice(1000.00);
                
                cout << " \nYou have booked your Standard reservation at the Best Western" << endl;
            }
            else if(newPacChoice == 2)
            {
                setHotelChoice(5000.00);
                
                cout << " \nYou have booked your Premium reservation at the Best Western" << endl;
            }
            else if(newPacChoice == 3)
            {
                setHotelChoice(10000.00);
                
                cout << " \nYou have booked your Luxury reservation at the Best Western" << endl;
                
            }
            else
            {
                cout << "Sorry that is invalid input, redirecting to previous menu" << endl;
                system("CLS");
                hotels();
            }
            
            cout << "\nPress 1 to reDirect to main menu: ";
            cin >> goMenu;
            system("CLS");
            
            if(goMenu == 1)
            {
               // menu();
            }
            else
            {
                //menu();
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
                setHotelChoice(500.00);
                
                cout << " \nYou have booked your Standard reservation at the Delta" << endl;
            }
            else if (newPacChoice == 2)
            {
                setHotelChoice(1000.00);
                
                cout << " \nYou have booked your Premium reservation at the Delta" << endl;
            }
            else if (newPacChoice == 3)
            {
                setHotelChoice(2000.00);
                
                cout << " \nYou have booked your Luxury reservation at the Delta" << endl;
                
            }
            else
            {
                cout << "Sorry that is invalid input, redirecting to previous menu" << endl;
                system("CLS");
                hotels();
            }
            
            cout << "\nPress 1 to reDirect to main menu: ";
            cin >> goMenu;
            system("CLS");
            
            if(goMenu == 1)
            {
               // menu();
            }
            else
            {
                //menu();
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
                setHotelChoice(1500.00);
                
                cout << " \nYou have booked your Standard reservation at the Hilton" << endl;
            }
            else if(newPacChoice == 2)
            {
                setHotelChoice(5500.00);
                
                cout << " \nYou have booked your Premium reservation at the Hilton" << endl;
            }
            else if(newPacChoice == 3)
            {
                setHotelChoice(15000.00);
                
                cout << " \nYou have booked your Luxury reservation at the Hilton" << endl;
                
            }
            else
            {
                cout << "Sorry that is invalid input, redirecting to previous menu" << endl;
                system("CLS");
                hotels();
            }
            
            cout << "\nPress 1 to reDirect to main menu: ";
            cin >> goMenu;
            system("CLS");
            
            if(goMenu == 1)
            {
               // menu();
            }
            else
            {
                //menu();
            }
        }
         
        
    }
    
};


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
    void printBill()
    {
        ofstream outf("receipt.txt");
        {
            outf << "-----------Booking Agency-----------" << endl;
            outf << "---------------Recept---------------" << endl;
            outf << "____________________________________" << endl;
            
            outf << "Customer Id:" << getCustId() << endl << endl;
            outf << "Description\t\t Total" << endl;
            outf << "Hotel Cost\t\t " << fixed << setprecision(2) << gethotelPrice() << endl << endl;
            outf << "Flight Cost\t\t " << fixed << setprecision(2) << getPrice() << endl << endl;
            
            outf << "____________________________________" << endl;
            outf << "Total Charge\t\t" << setprecision(2) << gethotelPrice()+getPrice() << endl;
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
    
    void showBill()
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
    
    
};


int main(int argc, const char * argv[]) {
   
    menu();
    
    return 0;
}


void menu()
{
    int mainChoice = 0;
    int CustChoice = 0;
    int goToMenu = 0;
    
    cout << "\t\t     * Travel Booking Service * \n" << endl;
    cout << "---------------------Main Menu------------------" << endl;
    
    cout << "\t______________________________________________" << endl;
    cout << "\t1. Customer Management" << endl;
    cout << "\t2. Flight Management" << endl;
    cout << "\t3. Booking Management" << endl;
    cout << "\t4. Billing" << endl;
    cout << "\t5. Exit" << endl;
    cout << "************************************************" << endl;
    
    cout << "\nEnter Your Selection: " << endl;
    cin >> mainChoice;
    
    system("CLS");
    
    // create objects
    Customers customerMake;
    Flights flightMake;
    Booking bookingMake;
    Charges chargesMake;
    
    if(mainChoice == 1)
    {
        cout << "-------Customers---------\n" << endl;
        cout << "\t1. Enter New Customer" << endl;
        cout << "\t2. Show old customers" << endl;
        
        cout << "Enter Choice: " << endl;
        cin >> CustChoice;
        
        if(CustChoice == 1)
        {
            customerMake.getDetails();
        }
        else if(CustChoice == 2)
        {
            customerMake.showDetails();
        }
        else
        {
            cout << "Sorry that is invalid input, redirecting to previous menu" << endl;
            system("CLS");
            menu();
        }
        
        cout << "\n Press 1 to redirect to main menu" << endl;
        cin >> goToMenu;
        system("CLS");
        
        if(goToMenu == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
        
    }
    
    else if(mainChoice == 2)
    {
        flightMake.flightDetails();
    }
    else if(mainChoice == 3)
    {
        bookingMake.hotels();
    }
    else if(mainChoice == 4)
    {
        chargesMake.printBill();
        chargesMake.showBill();
        
        cout << "Press 1 to go back to main menu: " << endl;
        cin >> goToMenu;
        if(goToMenu)
        {
            system("CLS");
            menu();
        }
        else
        {
            system("CLS");
            menu();
        }
    }
    else if(mainChoice == 5)
    {
        cout<< "---------Goodbye-----------" << endl;
        system("CLS");
        menu();
        
        
    }
    
    
    
}

