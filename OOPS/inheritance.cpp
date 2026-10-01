#include <iostream>
using namespace std;

class Shape {
public:
    virtual void getData() {
    }

    virtual void displayArea() {
    }
};

class Rectangle : public Shape {
    float length, breadth;

public:
    void getData() {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void displayArea(){
        cout << "Area of Rectangle = "
             << length * breadth << endl;
    }
};

class Circle : public Shape {
    float radius;

public:
    void getData() {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void displayArea()  {
        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }
};

int main() {
    Rectangle r;
    Circle c;

    cout << "Rectangle\n";
    r.getData();
    r.displayArea();

    cout << "\nCircle\n";
    c.getData();
    c.displayArea();

    return 0;
}