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

}

int main()
{
    std::cout << "Hello World!\n";
}

