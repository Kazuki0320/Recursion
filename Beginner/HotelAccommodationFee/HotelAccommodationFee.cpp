#include <iostream>
using namespace std;

double hotelAccomodationFee(int price, int day) {
    // 1日分の清掃費
    int CLEANING_FEE = 20;

    // 1日分の食事代
    int FOOD_BILL = 30;

    // 税率10%
    double TAX_RATE = 0.1;

    // 滞在費合計（税抜き）
    int TOTAL = day * (price + CLEANING_FEE + FOOD_BILL);

    // 税込み
    return TOTAL * (1 + TAX_RATE);
}

int main() {
    cout << hotelAccomodationFee(80, 5) << endl;
    cout << hotelAccomodationFee(100, 1) << endl;
    cout << hotelAccomodationFee(25, 5) << endl;
}
