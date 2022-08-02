//#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n-i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n-1; i > 0 ; --i) {
        for (int j = n-i; j > 0; --j) {
            cout << " ";
        }
        for (int j = i; j > 0; --j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}


