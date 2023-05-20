#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_TEACHERS = 500;

double computeTax(double grossSalary) {
    double taxRate;
    if (grossSalary <= 2000) {
        taxRate = 0.0;
    } else if (grossSalary < 35000) {
        taxRate = 0.14;
    } else if (grossSalary < 100000) {
        taxRate = 0.25;
    } else {
        taxRate = 0.30;
    }
    return grossSalary * taxRate;
}

double computeNetPay(double grossSalary, double houseAllowance, double commuterAllowance, double loanDeduction) {
    double taxableIncome = grossSalary + houseAllowance + commuterAllowance - loanDeduction;
    double tax = computeTax(taxableIncome);
    double netPay = grossSalary + houseAllowance + commuterAllowance - tax - loanDeduction;
    return netPay;
}

int main() {
    double grossSalary[NUM_TEACHERS];
    double houseAllowance[NUM_TEACHERS];
    double commuterAllowance[NUM_TEACHERS];
    double loanDeduction[NUM_TEACHERS];
    double netPay[NUM_TEACHERS];

    for (int i = 0; i < NUM_TEACHERS; i++) {
        cout << "Enter gross salary for teacher " << (i+1) << ": ";
        cin >> grossSalary[i];
        cout << "Enter house allowance for teacher " << (i+1) << ": ";
        cin >> houseAllowance[i];
        cout << "Enter commuter allowance for teacher " << (i+1) << ": ";
        cin >> commuterAllowance[i];
        cout << "Enter loan deduction for teacher " << (i+1) << ": ";
        cin >> loanDeduction[i];
        netPay[i] = computeNetPay(grossSalary[i], houseAllowance[i], commuterAllowance[i], loanDeduction[i]);
        cout << "Net pay for teacher " << (i+1) << ": " << fixed << setprecision(2) << netPay[i] << endl;
    }

    return 0;
}
