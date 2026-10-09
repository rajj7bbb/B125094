#include <iostream>
using namespace std;

class Score {
    int score;

public:
    Score(int s = 0) : score(s) {}

    Score operator++() {
        ++score;
        return *this;
    }

    Score operator++(int) {
        Score temp = *this;
        score++;
        return temp;
    }

    void display() const {
        cout << score << endl;
    }
};

int main() {
    Score s1(10), s2(10);

    Score a = ++s1;
    Score b = s2++;

    cout << "Prefix Result: ";
    a.display();

    cout << "Prefix Original: ";
    s1.display();

    cout << "Postfix Result: ";
    b.display();

    cout << "Postfix Original: ";
    s2.display();

    return 0;
}