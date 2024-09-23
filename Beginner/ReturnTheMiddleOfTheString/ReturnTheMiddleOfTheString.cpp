#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string middleSubstring(string stringInput){
    // 関数を完成させてください
        // 文字列の長さ
        size_t len = stringInput.length();

        //　切り取られるサイズ
        size_t middle = floor(len/2);

        // 切り取りを始める前方の位置
         size_t front = ceil(middle/2.0);

        // 文字数が2以下のときは、最初の文字を返す
        if (len <= 2) return string(1, stringInput[0]);

        // 前方から前方　+ middle分だけ切り取り
        return stringInput.substr(front, middle);
}
