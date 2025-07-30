#include "pantryList.h"
#include "pantry.h"
#include <iostream>
#include <vector>

using namespace std;

bool pantryList::addItem(pantry_Item item) {
    items.push_back(item);
    return true;
}

bool pantryList::takeoutItem(const string& name) {
    for (int i = 0; i < items.size(); ++i) {
        if (items[i].getName() == name) {
            items.erase(items.begin() + i);
            return true;
        }
    }
    return false; 
}
bool pantryList::operator==(const pantryList& other) const {
    return items == other.items;
}

ostream& operator<<(ostream& os, const pantryList& list) {
    os << "Pantry List:\n";
    for (const auto& item : list.items) {
        os << item << "\n";
    }
    return os;
}

bool pantryList::editItem(const string& name, const pantry_Item& newItem) {
    for (int i = 0; i < items.size(); ++i) {
        if (items[i].getName() == name) {
            items[i] = newItem;
            return true; 
        }
    }
    return false; 
}