#include "pantry.h"

pantry_Item::pantry_Item(string name, int quantity) {
    this->name = name;
    this->quantity = quantity;
}

string pantry_Item::getName() const {
    return name;
}

int pantry_Item::getQuantity() const {
    return quantity;
}

bool pantry_Item::operator==(const pantry_Item& other) const {
    return name == other.name && quantity == other.quantity;
}

ostream& operator<<(ostream& os, const pantry_Item& item) {
    os << "Item: [" << item.name << " (" << item.quantity << ")]";
    return os;
}