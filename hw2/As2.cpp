#include<iostream>
using namespace std;

class Complex {
public:
    Complex() {
        cout << "I am Constructor \n";
    }

    ~Complex() {
        cout << "I am Destructor \n";
    }
};

void in() {
    Complex a;
}

void out() {
    Complex b;
}

int main() {
    Complex c;
    in();
    out();
    return 0;
}
