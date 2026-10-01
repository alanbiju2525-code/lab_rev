#include <iostream>
using namespace std;

class Customer {
protected:
    int customerId;
    string name;

public:
    void getCustomer() {
        cout << "Enter Customer ID: ";
        cin >> customerId;

        cout << "Enter Customer Name: ";
        cin >> name;
    }
};

class Product {
protected:
    string productName[100];
    float price[100];
    int quantity[100];int n;

public:
    void getProduct() {
        
        cout<<"\nEnter the no of products : ";
        cin>> n;

        for(int i = 0; i<n; i++){
        cout << "Enter Product Name: ";
        cin >> productName[i];

        cout << "Enter Price: ";
        cin >> price[i];

        cout << "Enter Quantity: ";
        cin >> quantity[i];}
    }
};

class Order : public Customer, public Product {
   

public:
    
    void displayBill() {
        float total = 0;

        cout << "\n========================================\n";
        cout << "              SHOPPING BILL\n";
        cout << "========================================\n";

        cout << "Customer ID   : " << customerId << endl;
        cout << "Customer Name : " << name << endl;

        cout << "----------------------------------------\n";
        cout << "Product\tPrice\tQty\tAmount\n";
        cout << "----------------------------------------\n";

        for (int i = 0; i < n; i++) {
            float amount = price[i] * quantity[i];
            total += amount;

            cout << productName[i] << "\t"
                 << price[i] << "\t"
                 << quantity[i] << "\t"
                 << amount << endl;
        }

        cout << "----------------------------------------\n";
        cout << "Total Bill = " << total << endl;
        cout << "========================================\n";
    }
};


int main() {
    Order o;

    o.getCustomer();
    o.getProduct();
    
    o.displayBill();

    return 0;
}