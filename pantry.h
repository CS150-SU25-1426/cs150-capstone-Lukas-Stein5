#include <string>
#include <iostream>
using namespace std;

class pantry_Item {
private:
    string name;
    int quantity;

public:
    pantry_Item(string name, int quantity) {
        this->name = name;
        this->quantity = quantity;
    }

    string getName() const { return name; }
    int getQuantity() const { return quantity; }

    bool operator==(const pantry_Item& other) const {
        return name == other.name && quantity == other.quantity;
    }

    friend ostream& operator<<(ostream& os, const pantry_Item& item) {
        os << "Item: [" << item.name << " (" << item.quantity << ")]";
        return os;
    }
};
