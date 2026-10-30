#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks[5];
    float total, percentage;

public:
    void getDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Student Name: ";
        cin.ignore();
        getline(cin, name);

        total = 0;

        cout << "Enter marks in 5 subjects:\n";

        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }

        percentage = total / 5;
    }

    void calculateGrade() {
        cout << "\nGrade: ";

        if (percentage >= 90)
            cout << "A+";
        else if (percentage >= 80)
            cout << "A";
        else if (percentage >= 70)
            cout << "B";
        else if (percentage >= 60)
            cout << "C";
        else if (percentage >= 40)
            cout << "D";
        else
            cout << "Fail";
    }

    void displayDetails() {
        cout << "\n\n----- STUDENT REPORT -----\n";
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << "/500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        calculateGrade();

        cout << "\n--------------------------\n";
    }
};

int main() {
    Student s;

    s.getDetails();
    s.displayDetails();

    return 0;
}
