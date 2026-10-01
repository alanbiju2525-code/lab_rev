#include <bits/stdc++.h>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int d = 1, int m = 1, int y = 2000) {
        day = d;
        month = m;
        year = y;
    }

    void input() {
        cout << "Enter date (DD MM YYYY): ";
        cin >> day >> month >> year;
    }

    // Overload + operator
    Date operator +(int days){
        Date temp = *this;

        while(days > 0){

            int max;
            temp.day++;

            if(temp.month == 2 ){
                if(temp.year % 400 == 0 || temp.year % 4 == 0 && temp.year % 100 != 0){
                    max = 29;
                }
                else{
                    max = 28;
                }
            }
            else if (temp.month == 4 || temp.month == 6 ||
                     temp.month == 9 || temp.month == 11) {
                max = 30;
            }
            else {
                max = 31;
            }

            if(days>max){
                temp.day=1;
                temp.month++;

                if(month>12){
                    temp.month = 1;
                    temp.year ++;
                }
            }
            days--;
        }
        return temp;
    }

    void display() {
        cout << "Date: "
             << day << "/"
             << month << "/"
             << year << endl;
    }
};

int main() {
    Date d;
    int days;

    d.input();

    cout << "Enter number of days to add: ";
    cin >> days;

    Date result = d + days;

    cout << "\nOriginal ";
    d.display();

    cout << "After adding " << days << " days: ";
    result.display();

    return 0;
}