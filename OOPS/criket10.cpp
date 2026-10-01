#include <iostream>
using namespace std;

class Player {
protected:
    string playerName;
    int jerseyNumber;

public:
    void inputPlayer() {
        cout << "Enter Player Name: ";
        cin >> playerName;

        cout << "Enter Jersey Number: ";
        cin >> jerseyNumber;
    }
};

class Batting : virtual public Player {
protected:
    int runs;

public:
    void inputBatting() {
        cout << "Enter Runs Scored: ";
        cin >> runs;
    }
};

class Bowling : virtual public Player {
protected:
    int wickets;

public:
    void inputBowling() {
        cout << "Enter Wickets Taken: ";
        cin >> wickets;
    }
};

class AllRounder : public Batting, public Bowling {
public:
    void input() {
        inputPlayer();
        inputBatting();
        inputBowling();
    }

    void display() {
        cout << "\n========== PLAYER PERFORMANCE ==========\n";
        cout << "Player Name    : " << playerName << endl;
        cout << "Jersey Number  : " << jerseyNumber << endl;
        cout << "Runs Scored    : " << runs << endl;
        cout << "Wickets Taken  : " << wickets << endl;
        cout << "========================================\n";
    }
};

int main() {
    AllRounder a;

    a.input();
    a.display();

    return 0;
}