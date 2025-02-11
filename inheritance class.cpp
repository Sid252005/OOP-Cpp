#include <iostream>
using namespace std;

class Addition {
public:
    int add(int a, int b) {
        return a + b;
    }
};

class Subtraction : public Addition {
public:
    int subtract(int a, int b) {
        return a - b;
    }
};

class Multiplication : public Subtraction {
public:
    int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    Multiplication obj;
    int x,y;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;

    cout << "Addition: " << obj.add(x, y) << endl;
    cout << "Subtraction: " << obj.subtract(x, y) << endl;
    cout << "Multiplication: " << obj.multiply(x, y) << endl;

    return 0;
}

