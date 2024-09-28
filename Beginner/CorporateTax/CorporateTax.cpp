#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double stateTax(string state, int profit) {
    if(state == "AZ") {
        return profit * 0.049;
    } else if (state == "CA") {
        return profit * 0.0884;
    } else if (state == "TX") {
        return profit * 0;
    } else if (state == "NC") {
        return profit * 0.025;
    } else {
        return profit * 0.05;
    }
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int calculateCorporationTax(string state, int year, int profit){
    // 関数を完成させてください
    double stateResult = stateTax(state, profit);
    double federalTaxRate = isLeapYear(year) ? 0.0 : 0.21;
    double federal = profit * federalTaxRate;

    // 未丸めの税額を合計
    double totalTax = stateResult + federal;

    // 合計税額を切り上げ
    int result = static_cast<int>(ceil(totalTax));

    return result;
}
