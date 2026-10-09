#include <iostream>
#include <cstdlib>
using namespace std;

class Fraction {
    int num, den;

    void simplify() {
        int a = abs(num), b = abs(den);

        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }

        if (a != 0) {
            num /= a;
            den /= a;
        }

        if (den < 0) {
            num = -num;
            den = -den;
        }
    }

public:
    Fraction(int n = 0, int d = 1) {
        if (d == 0) {
            cout << "Invalid denominator";
            exit(1);
        }

        num = n;
        den = d;
        simplify();
    }

    Fraction operator+(const Fraction& f) const {
        return Fraction(num * f.den + f.num * den, den * f.den);
    }

    Fraction operator-(const Fraction& f) const {
        return Fraction(num * f.den - f.num * den, den * f.den);
    }

    void display() const {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1(1, 2), f2(1, 3);

    cout << "First Fraction: ";
    f1.display();

    cout << "Second Fraction: ";
    f2.display();

    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}
//