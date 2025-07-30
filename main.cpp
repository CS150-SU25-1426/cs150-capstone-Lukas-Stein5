#include <string>
#include "pantry.h"
#include "pantryList.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){

    pantryList pantry;
    string name;
    int quantity;
    int expirationDate;

    bool running = true;

    
    int choice = 0;

    while (running) {
        cout << "************************************************************************\n";
        cout << "** **\n";
        cout << "** WELCOME TO THE                                                     **\n";
        cout << "** PANTRY                                                             **\n";
        cout << "** **\n";                         
        cout << "************************************************************************\n";
        cout << "** Please make a choice from the following options:                   **\n";
        cout << "** 1)  Add a new Item to Pantry                                       **\n";
        cout << "** 2)  Remove an Item from Pantry                                     **\n";
        cout << "** 3)  Edit Item in Pantry                                            **\n";
        cout << "** 4)  Display all Items in Pantry                                    **\n";
        cout << "** 5)  Exit                                                           **\n";
        cout << "************************************************************************\n";
        cout << ">> ";
        cin >> choice;

        if(choice < 1 || choice > 5) {
            cout << "Invalid choice. Please enter a number between 1 and 5.\n";
            return 1; // Exit the program with an error code
        }
    
        
        cin.ignore(); 
        string hold;

        cout << endl;

        switch (choice)
            {
            case 1:
            {
                cout << "Enter the name of the item: ";
                getline(cin, name);
                cout << "Enter the quantity of the item: ";
                cin >> quantity;
                cout << "Enter the how long the item has until it expires (in days): ";
                cin >> expirationDate;
            
                pantry_Item newItem(name, quantity, expirationDate);
                pantry.addItem(newItem);

                cout << "~~~Item added successfully~~~\n";
        
                cout << endl;
                break;
            }
            case 2:
        
                cout << pantry << endl; 
                cout << "\nWhich Item NAME would you like to remove? (or type 'cancel' to stop) >> ";
                cin >> name;

                if (name == "cancel") {
                    cout << "Removal cancelled.\n";
                } else {
                    if (pantry.takeoutItem(name)) {
                        cout << "~~~Item removed successfully~~~\n";
                    } else {
                        cout << "No item with that name. Please try again.\n";
                    } 
                }
                break;
            case 3:
                cout << "\n~~~Editing an Item in the Pantry~~~\n";
                cout << "Current Pantry Items:\n";
                cout << pantry << endl; 
                cout << "\nWhich Item NAME would you like to edit? (or type cancel to stop) >> ";
                cin >> name;

                if (name == "cancel") {
                    cout << "Edit cancelled.\n";
                } else {
                    cout << "Enter the new name for the item: ";
                    cin.ignore();
                    getline(cin, hold);
                    cout << "Enter the new quantity for the item: ";
                    cin >> quantity;
                    cout << "Enter the new expiration date for the item: ";
                    cin >> expirationDate;

                    pantry_Item newItem(hold, quantity, expirationDate);
                    if (pantry.editItem(name, newItem)) {
                        cout << "~~~Item edited successfully~~~\n";
                    } else {
                        cout << "No item with that name. Please try again.\n";
                    }
                }
                break;
            case 4:
                cout << "\n~~~Displaying all items in the pantry~~~\n";
                cout << pantry << endl;
                break;
            case 5:
                cout << "Thank you for using the Pantry program. Goodbye!\n";
                running = false; 
                return 0; 
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n\n";
                break;
            }
        } 

    
}



    