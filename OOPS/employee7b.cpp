#include<bits/stdc++.h>
using namespace std;

class Employee {
protected:
    int empId;
    string name;

public:
    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Name: ";
        cin >> name;
    }
};

class Salary {
protected:
    float basic, hra, da;

public:
    void getSalary() {
        cout << "Enter Basic Pay: ";
        cin >> basic;

        cout << "Enter HRA: ";
        cin >> hra;

        cout << "Enter DA: ";
        cin >> da;
    }
};

class Payroll : public Employee, public Salary {
public:
    void display() {
        float gross = basic + hra + da;
        getEmployee();
        getSalary();

        cout << "\n--- Employee Payroll ---" << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Pay: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << gross << endl;
    }
};

int main() {
    Payroll p;

    
    p.display();

    return 0;
}