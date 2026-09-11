#include <iostream>
using namespace std;

class ParkingFloor {
    int floorNo, slots;
    bool *occupied;

public:
    ParkingFloor(int f, int n) {
        floorNo = f;
        slots = n;
        occupied = new bool[slots];
        for (int i = 0; i < slots; i++)
            occupied[i] = false;
    }

    void reserve(int pos) {
        if (pos >= 1 && pos <= slots && !occupied[pos - 1]) {
            occupied[pos - 1] = true;
            cout << "Slot " << pos << " reserved\n";
        } else {
            cout << "Slot unavailable\n";
        }
    }

    void reserve(int start, int count) {
        if (start < 1 || start + count - 1 > slots) {
            cout << "Invalid range\n";
            return;
        }

        for (int i = start - 1; i < start - 1 + count; i++) {
            if (occupied[i]) {
                cout << "Group cannot be reserved\n";
                return;
            }
        }

        for (int i = start - 1; i < start - 1 + count; i++)
            occupied[i] = true;

        cout << "Group reserved\n";
    }

    void display() {
        cout << "Floor " << floorNo << ": ";
        for (int i = 0; i < slots; i++)
            cout << (occupied[i] ? "X " : "O ");
        cout << '\n';
    }

    ~ParkingFloor() {
        delete[] occupied;
    }
};

int main() {
    int n;
    cin >> n;

    ParkingFloor **floors = new ParkingFloor*[n];

    for (int i = 0; i < n; i++) {
        int slots;
        cin >> slots;
        floors[i] = new ParkingFloor(i + 1, slots);
    }

    floors[0]->reserve(2);
    floors[0]->reserve(4, 2);

    for (int i = 0; i < n; i++) {
        floors[i]->display();
        delete floors[i];
    }

    delete[] floors;
    return 0;
}