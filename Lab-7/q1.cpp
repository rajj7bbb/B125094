#include <iostream>
#include <string>
using namespace std;

class Ticket {    //single
protected:
    string name;
    double distance;

public:
    Ticket(string n, double d) {
        name = n;
        distance = d;
    }
};

class RailwayTicket : public Ticket {
    double farePerKm;

public:
    RailwayTicket(string n, double d, double f)
        : Ticket(n, d) {
        farePerKm = f;
    }

    void display() {
        double fare = distance * farePerKm;

        if (distance > 300)
            fare *= 0.90;

        cout << "Passenger Name: " << name << endl;
        cout << "Distance: " << distance << " km" << endl;
        cout << "Final Fare: Rs. " << fare << endl;
    }
};

int main() {
    RailwayTicket t("Rajib", 400, 2.5);
    t.display();

    return 0;
}