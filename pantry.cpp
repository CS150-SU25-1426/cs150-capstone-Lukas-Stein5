#include "pantry.h"

pantry_Item::pantry_Item(string name, int quantity, int expirationDate) {
    this-> name = name;
    this-> quantity = quantity;
    this-> expirationDate = expirationDate;
}

pantry_Item::pantry_Item() : name(""), quantity(0), expirationDate(0) {}

string pantry_Item::getName() const {
    return name;
}

int pantry_Item::getQuantity() const {
    return quantity;
}

int pantry_Item::getExpirationDate() const {
   return expirationDate;
}

bool pantry_Item::operator==(const pantry_Item& other) const {
    return name == other.name && quantity == other.quantity && expirationDate == other.expirationDate;
}

ostream& operator<<(ostream& os, const pantry_Item& item) {
    os << "Item: [" << item.name << " (Quantity: " << item.quantity << "), Days until expiration: " << item.expirationDate << "]";
    return os;
}