#include <iostream>
using namespace std;

// Function to check whether the date is valid
bool validDate(int day, int month, int year) {
    if (year <= 0 || month < 1 || month > 12)
        return false;

    int days[] = {0, 31, 28, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};

    // Check leap year
    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0)) {
        days[2] = 29;
    }

    if (day < 1 || day > days[month])
        return false;

    return true;
}


// Base class
class Book {
protected:
    int bookId;
    string title;

public:
    void inputBook() {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cout << "Enter Book Title: ";
        cin >> title;
    }
};


// Derived class 1
class IssuedBook : public Book {
protected:
    int issueDay, issueMonth, issueYear;

public:
    void inputIssue() {
        inputBook();

        do {
            cout << "Enter Issue Date (DD MM YYYY): ";
            cin >> issueDay >> issueMonth >> issueYear;

            if (!validDate(issueDay, issueMonth, issueYear))
                cout << "Invalid date! Enter again.\n";

        } while (!validDate(issueDay, issueMonth, issueYear));
    }
};


// Derived class 2
class ReturnedBook : public IssuedBook {
private:
    int delayedDays;
    float fine;

public:
    void inputReturn() {
        inputIssue();

        do {
            cout << "Enter Delayed Days: ";
            cin >> delayedDays;

            if (delayedDays < 0)
                cout << "Delayed days cannot be negative.\n";

        } while (delayedDays < 0);
    }

    void calculate() {
        // Fine = Rs.5 per delayed day
        fine = delayedDays * 5;
    }

    void display() {
        cout << "\n====================================\n";
        cout << "          BOOK DETAILS\n";
        cout << "====================================\n";

        cout << "Book ID       : " << bookId << endl;
        cout << "Title         : " << title << endl;

        cout << "Issue Date    : "
             << issueDay << "/"
             << issueMonth << "/"
             << issueYear << endl;

        cout << "Delayed Days  : " << delayedDays << endl;
        cout << "Fine          : Rs. " << fine << endl;

        cout << "====================================\n";
    }
};


int main() {

    ReturnedBook b;

    b.inputReturn();

    b.calculate();

    b.display();

    return 0;
}