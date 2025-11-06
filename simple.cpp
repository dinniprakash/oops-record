#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    // Constructor to initialize length
    Box(int l) {
        length = l;
    }

    // Declare friend function
    friend void displayLength(Box b);
};

// Definition of friend function
void displayLength(Box b) {
    // Can access private member 'length'
    cout << "Length of box: " << b.length << endl;
}

int main() {
    Box box1(15);

    // Calling the friend function
    displayLength(box1);

    return 0;
}
