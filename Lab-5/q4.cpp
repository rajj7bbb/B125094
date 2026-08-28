#include <iostream>
using namespace std;

int process(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}
double process(double arr[], int n)
{
    double sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}
int process(int arr[], int n, int k)
{
    int sum = 0;

    if (k > n)
        k = n;

    for (int i = 0; i < k; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int n, k;
    int iarr[100];
    double darr[100];

    cout << "Enter size of integer array: ";
    cin >> n;

    cout << "Enter integer array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> iarr[i];

    cout << "Enter size of floating-point array: ";
    int m;
    cin >> m;

    cout << "Enter floating-point array elements:\n";
    for (int i = 0; i < m; i++)
        cin >> darr[i];

    cout << "Enter k: ";
    cin >> k;

    cout << "\nSum of integer array = " << process(iarr, n);
    cout << "\nSum of floating-point array = " << process(darr, m);
    cout << "\nSum of first " << k << " elements = "
         << process(iarr, n, k);

    return 0;
}