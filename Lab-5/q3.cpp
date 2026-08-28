#include <iostream>
#include <cctype>
using namespace std;

void check(int n)
{
    if (n > 0)
        cout << "The number is positive.\n";
    else if (n < 0)
        cout << "The number is negative.\n";
    else
        cout << "The number is zero.\n";
}

void check(char ch)
{
    if (isupper(ch))
        cout << "The character is uppercase.\n";
    else if (islower(ch))
        cout << "The character is lowercase.\n";
    else
        cout << "The character is not a letter.\n";
}
void check(char arr[], char target)
{
    bool found = false;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == target)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Character found in the array.\n";
    else
        cout << "Character not found in the array.\n";
}

int main()
{
    int n;
    char ch, target;
    char arr[100];

    cout << "Enter an integer: ";
    cin >> n;
    check(n);

    cout << "Enter a character: ";
    cin >> ch;
    check(ch);

    cout << "Enter a character array/string: ";
    cin >> arr;

    cout << "Enter character to search: ";
    cin >> target;

    check(arr, target);

    return 0;
}