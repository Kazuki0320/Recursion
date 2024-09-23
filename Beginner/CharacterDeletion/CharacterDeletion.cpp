#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string deleteAt(string s, int i){
    // 関数を完成させてください
    if(i == 0 || s.length() < i) return s;
    s.erase(i-1,1);
    return s;
}
