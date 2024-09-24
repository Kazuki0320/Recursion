#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string upperCaseDomain(string email){
    // 関数を完成させてください
    size_t firstAtPos = email.find("@") + 1;
    string domain = email.substr(firstAtPos);
    for(char& c : domain) {
        c = toupper(static_cast<unsigned char>(c));
    }
    return domain;
}
