#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double planetGravityMpss(string planet) {
    double meter = 0.000621371;
    if (planet == "Earth") return 9.8 * meter;
    else if (planet == "Jupiter") return 24.79 * meter;
    else if (planet == "Mercury") return 3.7 * meter;
    else return 0;
}

int fallingDistance(string planet, int time){
    // 関数を完成させてください
    double hight = 0.5 * (planetGravityMpss(planet) * pow(time, 2));
    return std::floor(hight);
}
