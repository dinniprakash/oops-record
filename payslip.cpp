#include <iostream>
#include <iomanip>  // for std::setprecision
#include <string>
using namespace std;

int main() {
    string empName, empID, designation;
    double basicSalary, hra, da, ta, deductions, grossSalary, netSalary;

    cout << "=============================\n";
    cout << "        PAYSLIP SYSTEM       \n";
    cout << "=============================\n";

    // Input employee details
    cout << "Enter Employee Name: ";
    getline(cin, empName);

    cout << "Enter Employee ID: ";
    getline(cin, empID);

    cout << "Enter Designation: ";
    getline(cin, designation);

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter HRA (House Rent Allowance): ";
    cin >> hra;

    cout << "Enter DA (Dearness Allowance): ";
    cin >> da;

    cout << "Enter TA (Travel Allowance): ";
    cin >> ta;

    cout << "Enter Deductions: ";
    cin >> deductions;

    // Calculate gross and net salary
    grossSalary = basicSalary + hra + da + ta;
    netSalary = grossSalary - deductions;

    // Display payslip
    cout << "\n\n=============================\n";
    cout << "          PAYSLIP            \n";
    cout << "=============================\n";
    cout << "Employee Name   : " << empName << endl;
    cout << "Employee ID     : " << empID << endl;
    cout << "Designation     : " << designation << endl;
    cout << "-----------------------------\n";
    cout << fixed << setprecision(2);
    cout << "Basic Salary    : " << basicSalary << endl;
    cout << "HRA             : " << hra << endl;
    cout << "DA              : " << da << endl;
    cout << "TA              : " << ta << endl;
    cout << "Gross Salary    : " << grossSalary << endl;
    cout << "Deductions      : " << deductions << endl;
    cout << "-----------------------------\n";
    cout << "Net Salary      : " << netSalary << endl;
    cout << "=============================\n";

    return 0;
}
