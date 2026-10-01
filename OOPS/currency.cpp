#include<iostream>
using namespace std;

class Money{
    
    public:
    float rupees, paise;

    Money(float r , float p ){
        rupees = r;
        paise = p;
    }
    Money operator +(Money m){
        Money temp(0,0);

        temp.rupees = rupees + m.rupees;
        temp.paise = paise + m.paise;

        return temp;
    }
    Money operator -(Money m){
        Money temp(0,0);

        temp.rupees = rupees - m.rupees;
        temp.paise = paise - m.paise;

        return temp;
    }
    bool operator ==(Money m){

        if(rupees == m.rupees && paise == m.paise){
            return true;
        }
        return false;
    }

    void display(){
        cout<<rupees<<"."<<paise<<endl;
    }

};

int main(){
    
    float r1,p1,r2,p2;
    cout<<"Enter the 1st rupees and paise : ";
    cin>>r1>>p1;

    Money m1(r1, p1);

    cout<<"Enter the 2nd rupees and paise : ";
    cin>>r2>>p2;
    Money m2(r2, p2);

    Money m3 = m1+m2;
    m3.display();

    m3 = m1-m2;
    m3.display();

    if(m1==m2){
        cout<<"Both are equal ";
    }
    else{
        cout<<"not equal";
    }


    return 0;
}