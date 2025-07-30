#include <string>
#include <iostream>
using namespace std;

class pantry_Item {
private:
    string name;
    int quantity;

public:
    pantry_Item(string name, int quantity);

    string getName() const;
    int getQuantity() const;

    bool operator==(const pantry_Item& other) const;

    friend ostream& operator<<(ostream& os, const pantry_Item& item);
};
