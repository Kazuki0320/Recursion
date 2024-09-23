#include <iostream>
#include <cmath>

using namespace std;

bool isRationalNumber(int number) {
    // 平方根を計算
    double sqrtResult = sqrt(number);

    // 四捨五入した整数値を取得
    int roundedSqrt = round(sqrtResult);

    // 平方根が整数かどうかを確認
    return roundedSqrt * roundedSqrt == number;
}
