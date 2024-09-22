#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string redirectionUrl(string language){
    // 関数を完成させてください
    string domain = "www.example.org/";
    if(language == "English") return domain + "en";
    else if(language == "Japanese") return domain + "ja";
    else if(language == "Spanish") return domain + "es";
    else if(language == "Russian") return domain + "ru";
    else if(language == "German") return domain;
    else return domain;
 }


int main() {
    // テストコード
    cout << redirectionUrl("English") << endl;   // 出力: www.example.org/en
    cout << redirectionUrl("Japanese") << endl;  // 出力: www.example.org/ja
    cout << redirectionUrl("Spanish") << endl;   // 出力: www.example.org/es
    cout << redirectionUrl("Russian") << endl;   // 出力: www.example.org/ru
    cout << redirectionUrl("German") << endl;    // 出力: www.example.org/
    cout << redirectionUrl("French") << endl;    // 出力: www.example.org/
}
