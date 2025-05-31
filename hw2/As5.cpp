#include<iostream>
using namespace std;

class Student {
    char name[50];
    int age;
    int marks;

public:
    void input() {
        cout << "Enter name, age and marks: ";
        cin >> name >> age >> marks;
    }

    int getMarks() {
        return marks;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s[10];
    int a = 0;

    for(int i = 0; i < 3; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].input();
        if(s[i].getMarks() > s[a].getMarks()) {
            a = i;
        }
    }

    cout << "\n--- Student with Highest Marks ---\n";
    s[a].display();

    return 0;
}
