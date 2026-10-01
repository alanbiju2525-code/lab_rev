#include<iostream>
#include<string>
using namespace std;

class account{
    protected :
    int accno;
    string name;
    float balance;

    public:
    account(int a , string n, float b){
        accno = a;
        name = n;
        balance = b;
    }

};

class deposit : virtual public account{
    protected :

    float depo;

    public :

    void gdeposit(){
        cout<<"Total ammount to be deposited : ";
        cin>>depo;

        balance += depo;
    }

};

class withdrawal : virtual public account{

    protected :

    float withdraw;

    public :

    void gwithdrawal(){
        cout<<"Enter the withdrawyal amount : ";
        cin>>withdraw;

        if(withdraw < balance-1000){
            cout<<"Not possible ";
        }
        else{
            cout<<"withdrwal suceceess";
            balance = balance - withdraw - 10;
        }
    }
};

class accountsummary: public deposit, public withdrawal{

    public:

    void display(){
        cout<<"Balance : "<<balance;
    }
};

int main(){
    
    int a;
    string n;
    float bal;
    cout<<"accno, name , balnce ";
    accountsummary obj(a,n,bal);

    obj.gdeposit();
    obj.gwithdrawal();
    obj.display();

    return 0;
}