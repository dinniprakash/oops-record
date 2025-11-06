#include <iostream>
using namespace std;

// Class definition for Complex numbers
class Complex {
private:
    float real;   // Real part of the complex number
    float imag;   // Imaginary part of the complex number

public:
    // Constructor to initialize the complex number
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Function to display the complex number
    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }

    // Function to add two complex numbers, and return the result as an object
    Complex add(const Complex& other) {
        Complex temp;
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp; // Returning the result as a new Complex object
    }
};

int main() {
    // Create two Complex number objects
    Complex c1(3.5, 2.5); // Complex number 1: 3.5 + 2.5i
    Complex c2(1.5, 4.5); // Complex number 2: 1.5 + 4.5i

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    // Add the two complex numbers using the add method
    Complex result = c1.add(c2); // `add` returns a new Complex object
    cout << "Sum of the Complex Numbers: ";
    result.display();

    return 0;
}
