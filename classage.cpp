#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    float marks;

public:
    void setDetails(string n, int a, float m) {
        name = n;
        age = a;
        marks = m;
    }

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1; 
    s1.setDetails("Ram", 20, 85.5);
    s1.display();

    return 0;
}

