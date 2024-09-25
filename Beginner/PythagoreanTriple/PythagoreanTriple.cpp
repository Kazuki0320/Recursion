#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// 距離を計算する関数
double distance(int x, int y) {
    return sqrt(pow(x, 2) + pow(y, 2)); // x^2 + y^2 の平方根を計算
}

// 小数点があるかどうかを確認する関数
bool hasDecimal(double result) {
    return result != std::floor(result); // 少数部分がある場合に ture 返す
}

bool isPerfectSquare(int x, int y){
    // 関数を完成させてください
    double result = distance(x, y); 

    if(hasDecimal(result)) {
        return false; // 小数がある場合は完全平方数ではない
    } else {
        return true; // 小数がない（整数）の場合は完全平方数
    }
}
