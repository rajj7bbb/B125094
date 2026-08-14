#include <iostream>
using namespace std;

int main() {
    int n, vowels = 0, consonants = 0, digits = 0, spaces = 0;

    cout << "Enter size of character array: ";
    cin >> n;

    char *arr = new char[n];

    cin.ignore();

    cout << "Enter a string: ";
    cin.getline(arr, n);

    for (int i = 0; arr[i] != '\0'; i++) {
        char ch = arr[i];

        if (ch == ' ')
            spaces++;
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if ((ch >= 'A' && ch <= 'Z') ||
                 (ch >= 'a' && ch <= 'z')) {

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "\nVowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;
    cout << "Digits = " << digits << endl;
    cout << "Spaces = " << spaces << endl;

    delete[] arr;

    return 0;
}