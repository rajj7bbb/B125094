#include <iostream>
using namespace std;

class AccountBalance {
    double balance;

public:
    AccountBalance(double b) : balance(b) {}

    AccountBalance operator-() const {
        return AccountBalance(-balance);
    }

    void display() const {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    AccountBalance a1(5000);

    AccountBalance a2 = -a1;

    cout << "Original Object: ";
    a1.display();

    cout << "Negative Object: ";
    a2.display();

    return 0;
}