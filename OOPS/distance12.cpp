#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    void input() {
        cout << "Enter feet: ";
        cin >> feet;

        do {
            cout << "Enter inches (0-11): ";
            cin >> inches;
        } while (inches < 0 || inches >= 12);
    }

    // Operator + as member function
    Distance operator +(Distance d) {
        Distance temp;

        temp.inches = inches + d.inches;
        temp.feet = feet + d.feet;

        if (temp.inches >= 12) {
            temp.feet++;
            temp.inches -= 12;
        }

        return temp;
    }

    // Operator < as friend function
   friend bool operator <(Distance d1, Distance d2);
    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

// Friend function

bool operator <(Distance d1, Distance d2){
    int total1 = d1.feet*12 + d1.inches;
    int total2 = d2.feet*12 + d2.inches;

    return total1<total2;
}


int main() {
    Distance d1, d2, d3;

    cout << "Enter first distance:\n";
    d1.input();

    cout << "\nEnter second distance:\n";
    d2.input();

    // Addition
    d3 = d1 + d2;

    cout << "\nAddition: ";
    d3.display();

    // Comparison
    if (d1 < d2)
        cout << "First distance is smaller.";
    else
        cout << "First distance is not smaller.";

    return 0;
}