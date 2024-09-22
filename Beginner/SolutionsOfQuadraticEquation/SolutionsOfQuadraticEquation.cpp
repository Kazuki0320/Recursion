#include <iostream>

int quadraticEquation(int a, int b, int c);

int main() {
    std::cout << quadraticEquation(1, -2, 1) << std::endl; // 出力: 1（重解）
    std::cout << quadraticEquation(1, 0, -1) << std::endl; // 出力: 2（2つの実数解）
    std::cout << quadraticEquation(1, 0, 1) << std::endl;  // 出力: -2（虚数解）
    std::cout << quadraticEquation(0, 2, 1) << std::endl;  // 出力: 0（二次の係数が0）
    return 0;
}

int quadraticEquation(int a, int b, int c) {
    if (a == 0) return 0;
    int discriminant = b * b - 4 * a * c;
    if (discriminant == 0) return 1;
    else if (discriminant > 0) return 2;
    else return -2;
}
