#include<iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    ~Complex() {
        cout << "Complex object destroyed\n";
    }

    void add(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void sub(Complex c1, Complex c2) {
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
    }

    Complex multi(Complex c) {
        Complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }

    void display() {
        cout << "Complex Number: " << real << " + " << imag << "i\n";
    }
};

int main() {
    Complex c1(2, 3), c2(1, 4), result, mult;

    result.add(c1, c2);
    cout << "Addition: ";
    result.display();

    result.sub(c1, c2);
    cout << "Subtraction: ";
    result.display();

    mult = c1.multi(c2);
    cout << "Multiplication: ";
    mult.display();

    return 0;
}
