#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void getPerson() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }
};

class Teacher : public Person {
private:
    string subject;
    float salary;

public:
    void input() {
        cout << "\n--- Teacher Details ---\n";

        getPerson();

        cout << "Enter Subject: ";
        cin >> subject;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\n--- Teacher Information ---\n";
        cout << "Name    : " << name << endl;
        cout << "Age     : " << age << endl;
        cout << "Subject : " << subject << endl;
        cout << "Salary  : " << salary << endl;
    }
};

class Student : public Person {
private:
    string course;
    float marks;

public:
    void input() {
        cout << "\n--- Student Details ---\n";

        getPerson();

        cout << "Enter Course: ";
        cin >> course;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\n--- Student Information ---\n";
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "Course : " << course << endl;
        cout << "Marks  : " << marks << endl;
    }
};

int main() {
    Teacher t;
    Student s;

    t.input();
    s.input();

    t.display();
    s.display();

    return 0;
}