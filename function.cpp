#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two floating-point numbers
float add(float a, float b) {
    return a + b;
}

int main() {
    int x = 10, y = 20, z = 30;
    float p = 5.5, q = 3.2;

    cout << "Sum of two integers: " << add(x, y) << endl;
    cout << "Sum of three integers: " << add(x, y, z) << endl;
    cout << "Sum of two floats: " << add(p, q) << endl;

    return 0;
}
