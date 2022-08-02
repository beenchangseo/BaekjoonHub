//#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int row;
    cin >> row;
    for (int i = 0; i <= row; ++i) {
        for (int j = 0; j < row-i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}


