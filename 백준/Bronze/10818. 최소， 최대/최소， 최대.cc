//#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, maxValue = -1000001, minValue = 1000001, inputValue;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> inputValue;
        minValue = min(minValue, inputValue);
        maxValue = max(maxValue, inputValue);
    }
    cout << minValue << " " << maxValue;
    return 0;
}


