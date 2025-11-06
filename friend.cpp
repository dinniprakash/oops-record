#include <iostream>
using namespace std;

class ClassB;  // Forward declaration

class ClassA {
private:
    int marks;
public:
    void setMarks(int m) {
        marks = m;
    }
    friend void compareMarks(ClassA, ClassB); // Declare friend function
};

class ClassB {
private:
    int marks;
public:
    void setMarks(int m) {
        marks = m;
    }
    friend void compareMarks(ClassA, ClassB); // Declare friend function
};

// Friend function definition
void compareMarks(ClassA a, ClassB b) {
    cout << "Marks of Class A student: " << a.marks << endl;
    cout << "Marks of Class B student: " << b.marks << endl;

    if (a.marks > b.marks)
        cout << "Class A student scored higher." << endl;
    else if (a.marks < b.marks)
        cout << "Class B student scored higher." << endl;
    else
        cout << "Both students have equal marks." << endl;
}

int main() {
    ClassA studentA;
    ClassB studentB;

    int m1, m2;
    cout << "Enter marks for Class A student: ";
    cin >> m1;
    cout << "Enter marks for Class B student: ";
    cin >> m2;

    studentA.setMarks(m1);
    studentB.setMarks(m2);

    compareMarks(studentA, studentB);  // Call friend function

    return 0;
}
