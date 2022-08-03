#include <iostream>
#include <string>

using namespace std;
int sum(int n);
int main() {
    int n, result;
    cin >> n;
    result = sum(n);
    cout << result;
    return 0;
}
int sum(int n){
    if (n == 0) return 0;
    return n + sum(n-1);
}

