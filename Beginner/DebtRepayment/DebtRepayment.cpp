#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int howMuchIsYourDebt(int year){
    // 関数を完成させてください
    double prinsipal = 10000;
    double interestRate = 0.2;
    double debt = prinsipal * pow(1 + interestRate, year);
    return floor(debt);
}
