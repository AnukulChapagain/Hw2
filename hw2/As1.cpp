#include<iostream>
using namespace std;

class Area {
    int len, bred;

public:
    Area() {
        len = 0;
        bred = 0;
    }
    Area(int a, int b) {
        len = a;
        bred = b;
    }
    void input() {
        cout << "Enter the length and breadth of the room: ";
        cin >> len >> bred;
    }
    int calArea() {
        return len * bred;
    }
    void display() {
        cout << "Area: " << calArea() << endl;
    }
};

int main() {
    Area a1, a2, a3;
    cout << "Room 1" << endl;
    a1.input();

    cout << "Room 2" << endl;
    a2.input();

    cout << "Room 3" << endl;
    a3.input();

    int area1 = a1.calArea();
    int area2 = a2.calArea();
    int area3 = a3.calArea();

    int total = area1 + area2 + area3;


    cout << "Room 1: " << area1 << " sq. units" << endl;
    cout << "Room 2: " << area2 << " sq. units" << endl;
    cout << "Room 3: " << area3 << " sq. units" << endl;

    cout << "\nTotal area to be carpeted: " << total << " sq. units" << endl;

    return 0;
}
