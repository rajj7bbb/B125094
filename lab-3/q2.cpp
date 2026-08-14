#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;

    int *arr = new int[n];

    cout << "Enter" << n << "Elements";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"array in reverse order";
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<"";
    }

    cout<<endl;

    delete[] arr;
    return 0;
}