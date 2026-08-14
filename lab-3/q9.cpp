#include <iostream>
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;

public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    float getSalary() {
        return salary;
    }
};

int main() {
    int n;
    float total = 0;
    int highest = 0;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee *emp = new Employee[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << ":\n";
        emp[i].input();
    }

    for (int i = 0; i < n; i++) {
        total += emp[i].getSalary();

        if (emp[i].getSalary() > emp[highest].getSalary())
            highest = i;
    }

    cout << "\nEmployee with Highest Salary:\n";
    emp[highest].display();

    cout << "\nAverage Salary = " << total / n << endl;

    delete[] emp;

    return 0;
}