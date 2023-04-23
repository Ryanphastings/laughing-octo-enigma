/* FinalProject.cpp 
    this program reads from a file and produces various outputs containg grocery item amounts dependant on user input
    and then writes to a backup file for history
    by Ryan Hastings
    4\13\2023
    */

#include <iostream>
#include "Menu.h"

int main()
{
    
    
    Menu menu = Menu("");
    menu.readFile("input.txt");   //filestream input

    int choice;
    string userItem;
    do {
        cout << "1 - Find an items frequency" << endl;        // do / while loop to handle the menu commands and entry validation
        cout << "2 - Print the frequency of all items" << endl;
        cout << "3 - Print a histogram of all items" << endl;
        cout << "4 - Quit application" << endl;
        cout << "Enter choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter item: ";          
                cin >> userItem;
                cout << "Item frequency: " << endl;
                menu.printWordFreq(userItem);
                break;
            case 2:
                menu.printPurchasedItemsFreq();
                break;
            case 3:
                menu.printPurchasedItemsHistogram();
                break;
            case 4:
                break;
            default:
                cout << "Choose Again" << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}

