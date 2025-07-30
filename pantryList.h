#ifndef PANTRYLIST_H
#define PANTRYLIST_H

#include <vector>
#include "pantry.h"
#include <iostream>
using namespace std;

class pantryList {
private:
    vector<pantry_Item> items;

public:
    bool addItem(pantry_Item item); 
    bool takeoutItem(const string& name);
    bool editItem(const string& name, const pantry_Item& newItem);

    bool operator==(const pantryList& other) const;
    friend ostream& operator<<(ostream& os, const pantryList& list);
};

#endif