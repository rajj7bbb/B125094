#include<iostream>
#include<string>
using namespace std;

class Book{
    private:
    int bookID;
    string bookTitle;
    string author;
    float price;

    public:
    void accept (){
        cout << "Enter Book ID";
        cin >> bookID;

        cin.ignore();

        cout<<"Enter Book Title ";
        getline(cin, bookTitle);

        cout<<"Enter Author";
        getline(cin, author);

        cout<<"Enter Price";
        cin>>price;
    }

    void display(){
        cout << "Book Details" << endl;
        cout<< "Book ID"<< bookID<< endl;
        cout<<"Book Title "<<bookTitle<< endl;
        cout << "Author "<< author << endl;
        cout<< "price"<< price << endl;
    }
};

int main(){
    Book *b = new Book;

    b->accept();
    b->display();

    delete b;

    return 0;
}

