#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, sum=0;
    char input;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        sum += input-'0';
    }
    cout << sum;

}