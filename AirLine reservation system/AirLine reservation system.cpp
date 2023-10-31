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

