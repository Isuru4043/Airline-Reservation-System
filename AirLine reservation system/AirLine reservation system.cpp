#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();

class Management 
{
public:
    Management()
    {
        mainMenu();
    }
};

class Details
{
public:
    static string name, gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information()
    {
        cout << "\nEnter the customer ID:";
        cin >> cId;
        cout << "\nEnter the name: ";
        cin >> name;
        cout << "\nEnter the age: ";
        cin >> age;
        cout << "\nEnter the address: ";
        cin >> add;
        cout << "\nEnter the gender: ";
        cin >> gender;
        cout << "\nYour details are seved with us\n";
    }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[] = { "Dubai","Canada","UK","USA","Australia","Europe" };

        for (int i = 0; i < 6; i++)
        {
            cout << (i + 1) << ".flight to " << flightN[i] << endl;
        }

        cout << "\nWelcome to the Airlines!" << endl;
        cout << "Press the number of the country of which you want to book the flight";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "____________Welcome to Dubai Emirates_____________" << endl;
            cout << "Your comfort is our priority. Enjoy the journey.!" << endl;

            cout << "Following are the flights\n" << endl;

            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;

            cout << "Select the flight you want to book : ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 14000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 15000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else if (choice1 == 3)
            {
                charges = 16000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input. shifting to the previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }

            else
            {
                mainMenu();
            }

        }

        case 2:
        {
            cout << "____________Welcome to Australian Airlines_____________" << endl;
            cout << "Your comfort is our priority. Enjoy the journey.!" << endl;

            cout << "Following are the flights\n" << endl;

            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;

            cout << "Select the flight you want to book : ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 14000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 15000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else if (choice1 == 3)
            {
                charges = 16000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input. shifting to the previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }

            else
            {
                mainMenu();
            }

        }

        case 3:
        {
            cout << "____________Welcome to British Airways_____________" << endl;
            cout << "Your comfort is our priority. Enjoy the journey.!" << endl;

            cout << "Following are the flights\n" << endl;

            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;

            cout << "Select the flight you want to book : ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 14000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 15000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else if (choice1 == 3)
            {
                charges = 16000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input. shifting to the previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }

            else
            {
                mainMenu();
            }
        }

        case 4:
        {
            cout << "____________Welcome to Canada Airlines_____________" << endl;
            cout << "Your comfort is our priority. Enjoy the journey.!" << endl;

            cout << "Following are the flights\n" << endl;

            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;

            cout << "Select the flight you want to book : ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 14000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 15000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else if (choice1 == 3)
            {
                charges = 16000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input. shifting to the previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }

            else
            {
                mainMenu();
            }

        }

        case 5:
        {
            cout << "____________Welcome to US Airlines_____________" << endl;
            cout << "Your comfort is our priority. Enjoy the journey.!" << endl;

            cout << "Following are the flights\n" << endl;

            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;

            cout << "Select the flight you want to book : ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 14000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 15000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else if (choice1 == 3)
            {
                charges = 16000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input. shifting to the previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }

            else
            {
                mainMenu();
            }

        }

        case 6:
        {
            cout << "____________Welcome to European Airways_____________" << endl;
            cout << "Your comfort is our priority. Enjoy the journey.!" << endl;

            cout << "Following are the flights\n" << endl;

            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t08-21-2022 8:00AM 10hrs Rs. 10000" << endl;

            cout << "Select the flight you want to book : ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 14000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 15000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else if (choice1 == 3)
            {
                charges = 16000;
                cout << "You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input. shifting to the previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }

            else
            {
                mainMenu();
            }

        }

        default :
        {
            cout << "Invalid input, shifting you to the main menu!" << endl;
        }

       
        }
    }
};

void mainMenu() {
    int lchoice;
    int schoice;
    int back;

    cout << "\t            XYZ Airlines \n" << endl;
    cout << "\t____________Main Menu_____________" << endl;

    cout << "\t_____________________________________" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;

    cout << "\t|\t Press 1 to add the customer Details   \t" << endl;
    cout << "\t|\t Press 2 for flight registration   \t" << endl;
    cout << "\t|\t Press 3 for ticket and charges  \t" << endl;
    cout << "\t|\t Press 4 Exit   \t" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t_____________________________________" << endl;

    cout << " Enter the choice : ";
    cin >> lchoice;

    Details d;
    Regiatration r;
    Tickets t;

    switch (lchoice)
    {
    case 1:
    {
        cout << "_________Customers_________\n"<<endl;
        d.information();
        cout << "Press any key to get back main Menu";
        cin >> back;

        if (back == 1) {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }
    case 2:
    {
        cout << "_________Book a flight using this system_________\n" << endl;
        r.flight();
        break;
    }

    case 3:
    {
        cout << "_________Get your Ticket_________\n" << endl;
        t.bill();

        cout << "Your ticket is printed. You can collect it.\n" << endl;
        cout << "press 1 to display your ticket";

        cin >> back;
        if (back == 1)
        {
            t.display();
            cout << "Press any key to go back to menu: ";

            cin >> back;
            if (back == 1) {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
            mainMenu();
        }
            break;
        
    }

    case 4:
    {
        cout << "\n\n\t_________Thank You_________" << endl;
        break;
    }
    default :
    {
        cout << "Invalid input, Please try again!\n" << endl;
        mainMenu();
        break;
    }

    }


}

int main()
{
    std::cout << "Hello World!\n";
}

