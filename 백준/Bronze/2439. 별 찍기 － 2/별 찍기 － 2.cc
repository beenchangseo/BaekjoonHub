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
        for (int k = 0; k < n-i; ++k) {
            cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}


