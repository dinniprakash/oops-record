#include <iostream>
using namespace std;

// Inline function to add two numbers
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;

    // Calling the inline function
    int result = add(x, y);

    cout << "Sum of " << x << " and " << y << " is: " << result << endl;

    return 0;
}
