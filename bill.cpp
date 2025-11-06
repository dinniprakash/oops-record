#include <iostream>
#include <cstring>
using namespace std;

class EBBill {
private:
    int customer_id, units;
    char customer_name[50], address[50];
    float amount;

public:
    void getCustomerDetails();
    void calculateAmount();
    void printBill();
};

// Function to get customer details
void EBBill::getCustomerDetails() {
    cout << "Enter customer ID: ";
    cin >> customer_id;
    cin.ignore();  // Clear newline from buffer

    cout << "Enter customer name: ";
    cin.getline(customer_name, 50);

    cout << "Enter address: ";
    cin.getline(address, 50);

    cout << "Enter number of units consumed: ";
    cin >> units;
}

// Function to calculate bill amount based on units
void EBBill::calculateAmount() {
    if (units <= 100)
        amount = 0;
    else if (units <= 300)
        amount = (units - 100) * 3.15;
    else if (units <= 500)
        amount = (200 * 3.15) + (units - 300) * 4.45;
    else if (units <= 800)
        amount = (200 * 3.15) + (200 * 4.45) + (units - 500) * 6.85;
    else
        amount = (200 * 3.15) + (200 * 4.45) + (300 * 6.85) + (units - 800) * 9.00;
}

// Function to print the bill
void EBBill::printBill() {
    cout << "\n----- Electricity Bill -----\n";
    cout << "Customer ID: " << customer_id << endl;
    cout << "Customer Name: " << customer_name << endl;
    cout << "Address: " << address << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Bill Amount: Rs. " << amount << endl;
}

int main() {
    EBBill eb;
    eb.getCustomerDetails();
    eb.calculateAmount();
    eb.printBill();
    return 0;
}