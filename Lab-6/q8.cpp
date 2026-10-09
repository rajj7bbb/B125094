#include <iostream>
using namespace std;

class Temperature {
    double celsius;

public:
    Temperature(double c) : celsius(c) {}

    bool operator>(const Temperature& t) const {
        return celsius > t.celsius;
    }

    bool operator<(const Temperature& t) const {
        return celsius < t.celsius;
    }

    Temperature operator-() const {
        return Temperature(-celsius);
    }

    void display() const {
        cout << celsius << " Celsius" << endl;
    }
};

int main() {
    Temperature t1(35), t2(20);

    cout << "First > Second: " << (t1 > t2) << endl;
    cout << "First < Second: " << (t1 < t2) << endl;

    Temperature t3 = -t1;

    cout << "Negative Temperature: ";
    t3.display();

    return 0;
}