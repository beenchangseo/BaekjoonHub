#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); ++i) {
        if (i % 10 == 0 && i != 0) cout << endl;
        cout << str[i];
    }

    return 0;
}