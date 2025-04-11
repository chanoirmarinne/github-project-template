#include <iostream>
using namespace std;

int main() {
    int age = 25;
    string name = "Alice";
    double salary = 450.00;
    char education_level = 'B' - 1; // Convert the 'A' to 'B'

    cout << "Age: " << age << ", Name: " << name << ", Salary: $" << salary << ", Education Level: " << (education_level >= 'A') ? "Advanced" : "Junior" << endl;

    return 0;
}
