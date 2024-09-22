#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    cout << string("Computer").length() << endl;
    cout << string("recursion@info.com").size() << endl;

    cout << "Computer"[string("Computer").length() - 1] << endl;
    cout << "recursion@info.com"[string("resursion@info.com").size() - 1] << endl;
}

