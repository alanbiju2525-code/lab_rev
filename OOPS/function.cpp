#include <iostream>
#include <cmath>
using namespace std;

class Power {
public:

    // Power of two integers
    int calculate(int base, int exponent) {
        return pow(base, exponent);
    }

    // Power of two float values
    float calculate(float base, float exponent) {
        return pow(base, exponent);
    }

    // Power with default exponent
    int calculate(int base) {
        return pow(base, 2);
    }
};

int main() {
    Power p;

    cout << "Power of 2^3 = "
         << p.calculate(2, 3) << endl;

    cout << "Power of 2.5^2 = "
         << p.calculate(2.5f, 2.0f) << endl;

    cout << "Power of 5^2 = "
         << p.calculate(5) << endl;

    return 0;
}