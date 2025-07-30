#ifndef PANTRY_H
#define PANTRY_H

#include <string>
#include <iostream>
using namespace std;

class pantry_Item {
private:
    string name;
    int quantity;
    int expirationDate;

public:
    pantry_Item(string name, int quantity, int expirationDate);
    pantry_Item();

    string getName() const;
    int getQuantity() const;
    int getExpirationDate() const;

    bool operator==(const pantry_Item& other) const;

    friend ostream& operator<<(ostream& os, const pantry_Item& item); // ✅ inside class
};

#endif