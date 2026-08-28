#include <iostream>
#include <cmath>
using namespace std;

int nearValue(int a, int b)
{
    if (abs(a) <= abs(b))
        return a;
    else
        return b;
}
double nearValue(double a, double b)
{
    if (fabs(a) <= fabs(b))
        return a;
    else
        return b;
}
int nearValue(int arr[], int n)
{
    int nearest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i]) < abs(nearest))
            nearest = arr[i];
    }

    return nearest;
}

int main()
{
    int arr[10];

    cout << "Nearest integer to zero = "
         << nearValue(2, 3) << endl;

    

    cout << "Nearest floating-point value to zero = "
         << nearValue(3.5, 4.5) << endl;


    cout << "Enter array elements:\n";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "Array element nearest to zero = "
         << nearValue(arr, 10);

    return 0;
}