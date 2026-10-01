#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:

    // Default constructor
    Distance() {
        feet = 0;
        inches = 0;
    }

    // Conversion constructor: meter -> Distance
    Distance(float meter) {
        float totalFeet = meter * 3.28084;

        feet = (int)totalFeet;
        inches = (totalFeet - feet) * 12;
    }

    // Conversion operator: Distance -> meter
    operator float() {
        float totalFeet = feet + inches / 12;
        return totalFeet / 3.28084;
    }

    void display() {
        cout << feet << " feet "
             << inches << " inches" << endl;
    }
};

int main() {

    float meter;

    cout << "Enter distance in meters: ";
    cin >> meter;

    // Meter -> Distance
    Distance d = meter;

    cout << "\nDistance in feet and inches: ";
    d.display();

    // Distance -> Meter
    float m = d;

    cout << "Distance in meters: " << m << " meters" << endl;

    return 0;
}