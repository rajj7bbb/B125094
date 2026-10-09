#include <iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    bool operator==(const Date& d) const {
        return day == d.day && month == d.month && year == d.year;
    }

    bool operator!=(const Date& d) const {
        return !(*this == d);
    }
};

int main() {
    Date d1(9, 10, 2026), d2(9, 10, 2026);

    cout << "Equality: " << (d1 == d2) << endl;
    cout << "Inequality: " << (d1 != d2) << endl;

    return 0;
}