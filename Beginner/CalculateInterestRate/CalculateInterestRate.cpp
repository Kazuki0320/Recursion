#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double calculateInterestRate(int capital) {
    if(capital % 2 == 0) return 0.02;
    else return 0.03;
}

int calculateGoalMoney(int capital, int year){
    // 関数を完成させてください
    double resultInterestRate = calculateInterestRate(capital);
    double futureValue = capital * pow(1+resultInterestRate, year);
    return floor(futureValue);
}
