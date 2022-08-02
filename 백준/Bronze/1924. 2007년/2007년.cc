#include <iostream>
#include <string>

using namespace std;

int main() {
    int m, d, sum=0, week;
    string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int a[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> m >> d;
    for (int i = 1; i < m; ++i) {
        sum += a[i];
    }
    sum += d;
    week = sum % 7;
    cout << day[week];
    return 0;
}