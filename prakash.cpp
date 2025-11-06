#include <iostream>
using namespace std;

// Class definition
class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called! Object created." << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called! Object destroyed." << endl;
    }

    // A method to display a message
    void showMessage() {
        cout << "This is a method inside the class Demo." << endl;
    }
};

int main() {
    // Creating an object of class Demo
    cout << "Creating object d1..." << endl;
    Demo d1; // Constructor is automatically called here
    
    // Calling a method of the class
    d1.showMessage();

    // Creating another object of class Demo
    cout << "Creating object d2..." << endl;
    Demo d2; // Constructor is automatically called here

    // Objects will be destroyed automatically when the scope ends

    return 0; // Destructor will be called automatically here
}
