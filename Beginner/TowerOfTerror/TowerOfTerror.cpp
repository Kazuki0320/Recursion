#include <iostream>
#include <string>
#include <cmath>
#include <unordered_map>

using namespace std;

const unordered_map<string, double> planetGravity = {
    {"Earth", 9.8},
    {"Jupiter", 24.79},
    {"Mars", 3.71},
    {"Pluto", 0.58},
    {"Moon", 1.62},
    {"Others", 0}
};

double planetGravityMpss(string planet) {
    auto it = planetGravity.find(planet);
    return (it != planetGravity.end()) ? it->second : planetGravity.at("Others");
}

double getVelocity(int height, double planetGravityMpss) {
    return sqrt(2 * planetGravityMpss * height);
}

string getEmotion(int height, string planet){
    // 関数を完成させてください
    // 重力加速度が定義されているかチェック
    if (planetGravity.find(planet) == planetGravity.end()) {
        return "no data";
    }
    int get = getVelocity(height, planetGravityMpss(planet));
    if(80 <= get) {
        return "terrified";
    } else if (60 <= get && get < 80) {
        return "frighten";
    } else if (40 <= get && get < 60) {
        return "scared";
    } else {
        return "afraid";
    }
}

