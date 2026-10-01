#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    float salary;

public:
    Employee(int id = 0, string n = "", float s = 0) {
        empId = id;
        name = n;
        salary = s;
    }

    void input() {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Name: ";
        cin >> name;

        do {
            cout << "Enter Salary: ";
            cin >> salary;
        } while (salary <= 0);
    }

    Employee operator +(int b){
        Employee temp = *this;

        temp.salary = temp.salary + b;

        return temp;
    }
    bool operator <(Employee e){
        return(salary < e.salary);
    }

    int getSalary(){
        return salary;
    }

  
   
    void display() {
        cout << "Employee ID : " << empId << endl;
        cout << "Name        : " << name << endl;
        cout << "Salary      : " << salary << endl;
    }
};

int main() {
    Employee e1, e2;
    float bonus;

    cout << "Enter details of Employee 1:\n";
    e1.input();

    cout << "\nEnter details of Employee 2:\n";
    e2.input();

    cout<<"\nEnter the bouns : ";
    cin>>bonus;

    e1 = e1 + bonus;
    cout<<"\nSalary : "<<e1.getSalary();

    if(e1<e2){
        cout<<"\n2nd on has highest";

    }
    else{
        cout<<"1st onr has highest ";
    }


    return 0;
}