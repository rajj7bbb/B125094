#include <iostream>
using namespace std;

class Trip {
    int tripID;
    double distance, baseFare;

public:
    Trip(int id, double d, double base) {
        tripID = id;
        distance = d;
        baseFare = base;
    }

    double fare() {
        return baseFare + distance * 10;
    }

    double fare(int waitingTime) {
        return fare() + waitingTime * 2;
    }

    double fare(int waitingTime, int discount) {
        double total = fare(waitingTime);
        return total - total * discount / 100.0;
    }

    friend void compareFare(Trip &, Trip &);
};

void compareFare(Trip &a, Trip &b) {
    double fare1 = a.fare(10, 10);
    double fare2 = b.fare(5, 5);

    if (fare1 < fare2)
        cout << "Trip 1 is cheaper\n";
    else if (fare2 < fare1)
        cout << "Trip 2 is cheaper\n";
    else
        cout << "Both trips have equal fare\n";
}

int main() {
    Trip *t1 = new Trip(101, 10, 50);
    Trip *t2 = new Trip(102, 15, 50);

    cout << "Trip 1 Fare: " << t1->fare(10, 10) << '\n';
    cout << "Trip 2 Fare: " << t2->fare(5, 5) << '\n';

    compareFare(*t1, *t2);

    delete t1;
    delete t2;

    return 0;
}