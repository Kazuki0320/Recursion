#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool checkCardType(string creditCardType) {
    if (creditCardType != "Visa" && creditCardType != "MasterCard") {
        return false;  // クレジットカードが対応していない場合、false を返す
    }
    return true;  // クレジットカードが対応している場合、true を返す
}

double askForTip(int cost) {
    if (cost % 3 == 0) {
        return cost * 0.03;
    } else if (cost % 5 == 0) {
        return cost * 0.05;
    } else if (cost % 7 == 0) {
        return cost * 0.07;
    } else {
        return cost * 0.1;
    }
}

double processPayment(string creditCardType , int cost){
    // 関数を完成させてください
    bool checkCardTypeResult = checkCardType(creditCardType);
    if(!checkCardTypeResult) return -1;
    // 消費税の計算（10%）
    double tax = cost * 0.10;

    double tip = askForTip(cost);
    double paymentResult = cost + tax + tip;
    if(300 < paymentResult) return -1;

    return paymentResult;
}
