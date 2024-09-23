#include <iostream>
#include <string>

using namespace std;

string insertUnderscoreAt(string s, int i){
    // 関数を完成させてください
    // 指定された位置にアンダースコアを挿入
    if(i >= 0 && i < s.length()) {
        s.insert(i, "_");
    }
    return s;
}
