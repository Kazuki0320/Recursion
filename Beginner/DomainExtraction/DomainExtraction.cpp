#include <iostream>
#include <string>
#include <algorithm>  // transform関数を使うために必要
#include <cctype>     // toupper関数を使うために必要

using namespace std;

string upperCaseDomain(string email) {
    // "@" の位置を見つける
    size_t firstAtPos = email.find("@") + 1;
    
    // ドメイン部分（"@" 以降）を取得
    string domain = email.substr(firstAtPos);
    
    // ドメイン部分を大文字に変換
    transform(domain.begin(), domain.end(), domain.begin(), ::toupper);
    
    // 大文字に変換されたドメインを表示（確認用）
    cout << domain << endl;
    
    // 必要に応じて返す処理（ここでは "aaa" を返しているが、変換後のドメインを返すなら domain を返す）
    return domain;
}
