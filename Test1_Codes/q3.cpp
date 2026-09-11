#include <iostream>
using namespace std;

class SensorGrid {
    int n;
    double *temp;

public:
    SensorGrid(int size) {
        n = size;
        temp = new double[n];
    }

    void enterReadings() {
        for (int i = 0; i < n; i++)
            cin >> temp[i];
    }

    void display() {
        for (int i = 0; i < n; i++)
            cout << temp[i] << " ";
        cout << '\n';
    }

    void replaceReading(int pos, double value) {
        if (pos >= 1 && pos <= n)
            temp[pos - 1] = value;
    }

    double average() const {
        double sum = 0;
        for (int i = 0; i < n; i++)
            sum += temp[i];
        return sum / n;
    }

    friend void compareAverage(SensorGrid &, SensorGrid &);

    ~SensorGrid() {
        delete[] temp;
    }
};

void compareAverage(SensorGrid &a, SensorGrid &b) {
    double x = a.average();
    double y = b.average();

    if (x > y)
        cout << "Grid 1 has greater average temperature\n";
    else if (y > x)
        cout << "Grid 2 has greater average temperature\n";
    else
        cout << "Both grids have equal average temperature\n";
}

int main() {
    int n1, n2;

    cin >> n1;
    SensorGrid g1(n1);
    g1.enterReadings();

    cin >> n2;
    SensorGrid g2(n2);
    g2.enterReadings();

    g1.replaceReading(1, 30.5);

    g1.display();
    g2.display();

    compareAverage(g1, g2);

    return 0;
}