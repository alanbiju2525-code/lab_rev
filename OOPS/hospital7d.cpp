#include <iostream>
using namespace std;

class Patient {
private:
    int patientId;
    string name;
    int age;

public:
    Patient() {
        patientId = 0;
        name = "";
        age = 0;
    }

    void input() {
        cout << "Enter Patient ID: ";
        cin >> patientId;

        cout << "Enter Name: ";
        cin >> name;

        do {
            cout << "Enter Age: ";
            cin >> age;
        } while (age <= 0);
    }

    void displayPatient() {
        cout << "Patient ID : " << patientId << endl;
        cout << "Name       : " << name << endl;
        cout << "Age        : " << age << endl;
    }
};

class MedicalRecord {
private:
    string disease;
    string doctor;
    float treatmentCost;

public:
    MedicalRecord() {
        disease = "";
        doctor = "";
        treatmentCost = 0;
    }

    void input() {
        cout << "Enter Disease: ";
        cin >> disease;

        cout << "Enter Doctor: ";
        cin >> doctor;

        do {
            cout << "Enter Treatment Cost: ";
            cin >> treatmentCost;
        } while (treatmentCost <= 0);
    }

    float calculate() {
        return treatmentCost;
    }

    void displayMedical() {
        cout << "Disease          : " << disease << endl;
        cout << "Doctor           : " << doctor << endl;
        cout << "Treatment Cost   : " << treatmentCost << endl;
    }
};

class Hospital : public Patient, public MedicalRecord {
private:
    float finalBill;

public:
    Hospital() {
        finalBill = 0;
    }

    void input() {
       //Patient::input();
        MedicalRecord::input();
    }

    void calculate() {
        finalBill = MedicalRecord::calculate();
    }

    void display() {
        cout << "\n========== HOSPITAL BILL ==========\n";

        displayPatient();
        displayMedical();

        cout << "-----------------------------------\n";
        cout << "Final Bill       : " << finalBill << endl;
        cout << "===================================\n";
    }
};

int main() {
    Hospital h;


    h.Patient::input();
    h.input();
  
    h.calculate();
    h.display();

    return 0;
}