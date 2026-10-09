#include <iostream>
using namespace std;

class Bill {
    int items;
    double amount;

public:
    Bill(int i, double a) : items(i), amount(a) {}

    Bill operator+(const Bill& b) const {
        return Bill(items + b.items, amount + b.amount);
    }

    bool operator>(const Bill& b) const {
        return amount > b.amount;
    }

    void display() const {
        cout << "Items: " << items
             << ", Total Amount: " << amount << endl;
    }
};

int main() {
    Bill b1(3, 500), b2(5, 800);

    Bill b3 = b1 + b2;

    cout << "Combined Bill: ";
    b3.display();

    cout << "First Bill > Second Bill: "
         << (b1 > b2) << endl;

    return 0;
}