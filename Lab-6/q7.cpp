#include <iostream>
using namespace std;

class InventoryItem {
    int id, quantity;
    double price;

public:
    InventoryItem(int i, double p, int q)
        : id(i), price(p), quantity(q) {}

    InventoryItem operator+(const InventoryItem& item) const {
        if (id != item.id || price != item.price) {
            throw invalid_argument("Incompatible inventory items");
        }
        return InventoryItem(id, price, quantity + item.quantity);
    }

    void display() const {
        cout << "Product ID: " << id
             << ", Price: " << price
             << ", Quantity: " << quantity << endl;
    }
};

int main() {
    InventoryItem i1(101, 50, 10);
    InventoryItem i2(101, 50, 20);

    try {
        InventoryItem i3 = i1 + i2;
        i3.display();
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}