#include <iostream>
using namespace std;

int main(){
    int *p=new int;
    int *q=new int;

    cout<<"Enter first number";
    cin >> *p;

    cout<<"Enter second number";
    cin >> *q;

    cout << "\nSum = "<< (*p + *q);
    cout<<"\nDifference="<<(*p - *q);
    cout<< "\nproduct="<<(*p * *q);

    if(*q!=0)
    cout<<"quotient="<<(float)*p/ *q;
    else
    cout<<"quotient=cannot divided by zero";

    delete p;
    delete q;

    return 0;
}
