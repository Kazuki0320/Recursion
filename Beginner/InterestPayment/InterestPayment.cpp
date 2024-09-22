#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double interestsPaid(double initialLoan, bool didPayOnTime) {
    double interestRate = didPayOnTime ? 0.02 : 0.15;
    double interest = initialLoan * interestRate;
    double fee = 2.5;
    double totalCharge = initialLoan + interest + fee;
    return totalCharge;
}

int main() {
	cout << interestsPaid(100, true) << endl;
}
