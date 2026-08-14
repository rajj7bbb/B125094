#include<iostream>
#include <string>
using namespace std;

class Product{
    private:
    int productID;
    string productName;
    float price;
    int quantity;

    public:
    void accept(){
        cout << "Enter product ID";
        cin >> productID;

        cin.ignore();

        cout << "Enter Product Name";
        getline(cin, productName);

        cout<<"Enter price";
        cin >> price;

        cout<<"Enter Quantity";
        cin>> quantity;
    }

    float getCost(){
        return price*quantity;
    }

    void display(){
        cout<<"product ID "<< productID << endl;
        cout<<"product Name"<< productName << endl;
        cout<<"Quantity"<< quantity << endl;
        cout<<"Total cost"<< getCost() << endl;
        }
};

int main(){
    int n;
    float inventoryValue=0;

    cout << "Enter number of products";
    cin>> n;

    Product *p = new Product[n];
    
    for(int i=0; i<n; i++)
    {
        cout << "Enter details of product"<< i+1 << endl;
        p[i].accept();
    }
    cout << "Product Details "<< endl;

    for(int i=0; i<n; i++){
        cout << "Product"<< i+1 << endl;
        p[i].display();

        inventoryValue += p[i].getCost();
    }
    cout << "Overall Inventory Value =" << inventoryValue << endl;

    delete[] p;
    return 0;
}

