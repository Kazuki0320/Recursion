#include <iostream>
#include <string>

using namespace std;

bool isValidEmail(string email) {
    // 1. 先頭に "@" がないか確認
    if (email[0] == '@') return false;

    // 2. "@" が含まれていない場合、無効なメールアドレス
    size_t firstAtPos = email.find('@');
    if (firstAtPos == string::npos) return false;

    // 3. "@" が複数含まれている場合は無効なメールアドレス
    if (email.find('@', firstAtPos + 1) != string::npos) return false;

    // 4. "@" の後に "." が含まれていない場合は無効
    if (email.find('.', firstAtPos + 1) == string::npos) return false;

    // 5. スペースが含まれている場合、無効なメールアドレス
    if (email.find(" ") != string::npos) return false;

    // 6. "@" の後にドメインが存在するか確認
    string domain = email.substr(firstAtPos + 1);
    if (domain.empty()) return false;

    return true;
}

