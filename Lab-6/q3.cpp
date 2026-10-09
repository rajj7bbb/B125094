#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    double price;

public:
    Book(string t, double p) : title(t), price(p) {}

    bool operator<(const Book& b) const {
        if (price == b.price)
            return title < b.title;
        return price < b.price;
    }
};  

int main() {
    Book b1("C++ Programming", 450);
    Book b2("Data Structures", 450);

    if (b1 < b2)
        cout << "First book is smaller";
    else
        cout << "First book is not smaller";

    return 0;
}