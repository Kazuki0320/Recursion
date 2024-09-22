#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string nameInitials(string firstName, string lastName){
    // 関数を完成させてください
    return string(1, firstName[0]) + "." + string(1, lastName[0]);
}
