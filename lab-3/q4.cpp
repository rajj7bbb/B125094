#include<iostream>
using namespace std;

int main()
{
    int n, search, position = -1;
    cout << "Enter the size of array";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter "<< n<< "Elements";
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }

    cout<<"Enter elements to search";
    cin>>search;

    for(int i=0; i<n; i++){
        if(arr[i]==search){
            position=i;
            break;
        }
    }
    if(position!= -1){
        cout<<"Element is present "<< endl;
    }
    else{
        cout<<"Element is not present"<< endl;

    }
    delete[] arr;

    return 0;
}