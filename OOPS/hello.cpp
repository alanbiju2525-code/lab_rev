#include <iostream>
using namespace std;
class num{
    
    public: 
    int x;
    num(int a = 0){
        x = a;
    }

    
};


class num2{
    int y;
    public: 
        num2(){};
    num2(num &a){
        y = a.x * 10;
    }
    void display(){
        cout << y;
    }
};

int main(){
    num a(20);
   num2 b;

    b = a;

    b.display();
}

