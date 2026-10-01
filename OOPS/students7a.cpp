#include <iostream>
using namespace std;

class Academic {
protected:
    int mark1, mark2, mark3;

public:
    void getAcademic() {
        cout << "Enter marks in 3 subjects: ";
        cin >> mark1 >> mark2 >> mark3;
    }
};

class Sports {
protected:
    int sportsPoints;

public:
    void getSports() {
        cout << "Enter sports points: ";
        cin >> sportsPoints;
    }
};

class Result : public Academic, public Sports {
public:
    void display() {

        getAcademic();
        getSports();
        int total = mark1 + mark2 + mark3 + sportsPoints;

        cout << "\n--- Student Result ---" << endl;
        cout << "Subject 1: " << mark1 << endl;
        cout << "Subject 2: " << mark2 << endl;
        cout << "Subject 3: " << mark3 << endl;
        cout << "Sports Points: " << sportsPoints << endl;
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result r;


    r.display();

    return 0;
}