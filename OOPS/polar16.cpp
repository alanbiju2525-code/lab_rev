#include <iostream>
#include <cmath>
using namespace std;

class Polar {
private:
    float radius, angle;

public:
    Polar(float r, float a) {
        radius = r;
        angle = a;
    }

    float getRadius() {
        return radius;
    }

    float getAngle() {
        return angle;
    }
};

class Rectangular {
private:
    float x, y;

public:

    // Polar -> Rectangular
    Rectangular(Polar p) {
        float rad = p.getAngle() * 3.14159 / 180;

        x = p.getRadius() * cos(rad);
        y = p.getRadius() * sin(rad);
    }

    void display() {
        cout << "Rectangular Coordinates: ";
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {

    float radius, angle;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Enter angle: ";
    cin >> angle;

    Polar p(radius, angle);

    Rectangular r = p;

    r.display();

    return 0;
}