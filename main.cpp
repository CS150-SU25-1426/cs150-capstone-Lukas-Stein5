#include <string>
#include "pantry.h"
#include <iostream>
using namespace std;

int main(){

    pantry_Item item1("Protein Bars", 4);
    pantry_Item item2("Protein Bars", 4);
    pantry_Item item3("Spam", 2);

    cout << "Item 1 and Quantity: " << item1 << endl;
    cout << "Item 2 and Quantity: " << item2 << endl;
    cout << "Item 3 and Quantity: " << item3 << endl;

    cout << endl;

    cout << "Are item 1 and item 2 the same?" << endl;
    if (item1 == item2) {
        cout << "Items are equal!" << endl;
    }
    else{
        cout << "Items are NOT equal!" << endl;
    }

    cout << endl;

    cout << "Are items 1 and items 3 the same?" << endl;
    if (item1 == item3) {
        cout << "Items are equal!" << endl;
    }
    else{
        cout << "Items are NOT equal!" << endl;
    }

    cout << endl;


    return 0;

}