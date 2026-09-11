#include <iostream>
using namespace std;

class GameController;

class Inventory {
    int playerID;
    int n;
    int *quantity;

public:
    Inventory(int id, int items) {
        playerID = id;
        n = items;
        quantity = new int[n];

        for (int i = 0; i < n; i++)
            quantity[i] = 0;
    }

    friend class GameController;

    void display() {
        cout << "Player ID: " << playerID << '\n';
        for (int i = 0; i < n; i++)
            cout << "Item " << i + 1 << ": " << quantity[i] << '\n';
    }

    ~Inventory() {
        delete[] quantity;
    }
};

class GameController {
public:
    void setQuantity(Inventory &inv, int item, int amount) {
        if (item >= 1 && item <= inv.n)
            inv.quantity[item - 1] = amount;
    }

    void inspect(Inventory &inv) {
        cout << "Player ID: " << inv.playerID << '\n';
        for (int i = 0; i < inv.n; i++)
            cout << inv.quantity[i] << " ";
        cout << '\n';
    }
};

int main() {
    Inventory *inv = new Inventory(101, 4);
    GameController controller;

    controller.setQuantity(*inv, 1, 10);
    controller.setQuantity(*inv, 2, 5);
    controller.setQuantity(*inv, 3, 8);

    controller.inspect(*inv);
    inv->display();

    delete inv;

    return 0;
}