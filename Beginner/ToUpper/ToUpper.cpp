#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string toUpperCase(string s){
    // 関数を完成させてください
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
    return s;
}
