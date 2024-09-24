#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string calculateLocation(double latitude, double longitude){
    // 関数を完成させてください
    string latDirection, lonDirection;

    if (latitude > 0) {
        latDirection = "north";
    } else if(latitude < 0) {
        latDirection = "south";
    } else {
        latDirection = "equator";
    }

    if (longitude > 0) {
        lonDirection = "east";
    } else if(longitude < 0) {
        lonDirection = "west";
    } else {
        lonDirection = "prime meridian";
    }

    if (latitude == 0 && longitude == 0) {
        return "equator/prime meridian";
    } else {
        return latDirection + "/" + lonDirection;
    }
}
