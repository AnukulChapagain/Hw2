#include<iostream>
using namespace std;

class Height {
    int feet, inch;

public:
    Height() {
        feet = 0;
        inch = 0;
    }

    Height(int f, int i) {
        feet = f;
        inch = i;
    }

    ~Height() {
        cout << "I am destroyer\n";
    }

    void input() {
        cout << "Enter feet and inches: ";
        cin >> feet >> inch;
    }

    void add(Height h1, Height h2) {
        inch = h1.inch + h2.inch;
        feet = h1.feet + h2.feet + (inch / 12);
        inch = inch % 12;
    }

    void display() {
        cout << "Total Height: " << feet << " feet " << inch << " inches\n";
    }
};

int main() {
    Height h1, h2, result;

    cout << "Enter first height:\n";
    h1.input();

    cout << "Enter second height:\n";
    h2.input();

    result.add(h1, h2);
    result.display();

    return 0;
}
