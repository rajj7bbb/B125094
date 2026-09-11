#include <iostream>
using namespace std;

class Borrower {
    int id, overdueDays;
    double fine;

public:
    Borrower(int i, int d) {
        id = i;
        overdueDays = d;
        fine = 0;
    }

    void calculateFine() {
        fine = overdueDays * 5;
    }

    void calculateFine(double specialRate) {
        fine = overdueDays * specialRate;
    }

    friend void compareFine(Borrower &, Borrower &);

    void display() {
        cout << "Borrower ID: " << id << " Fine: " << fine << '\n';
    }
};

void compareFine(Borrower &a, Borrower &b) {
    if (a.fine > b.fine)
        cout << "Borrower 1 has higher fine\n";
    else if (b.fine > a.fine)
        cout << "Borrower 2 has higher fine\n";
    else
        cout << "Both have equal fine\n";
}

int main() {
    Borrower *b1 = new Borrower(101, 10);
    Borrower *b2 = new Borrower(102, 8);

    b1->calculateFine();
    b2->calculateFine(7);

    b1->display();
    b2->display();

    compareFine(*b1, *b2);

    delete b1;
    delete b2;

    return 0;
}