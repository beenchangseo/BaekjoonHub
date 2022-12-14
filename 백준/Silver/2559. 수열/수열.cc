/**
 * BaekJoon 2559번 / 구간합
 * 전체 구간 합 배열을 구한 뒤 계산 하는 방식
 **/

#include <bits/stdc++.h>

using namespace std;

int n, k, temp, psum[100000], ret = -10000000;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> temp;
        psum[i] = psum[i-1] + temp;
    }
    for (int i = k; i <= n; i++) {
        ret = max(ret, psum[i]-psum[i-k]);
    }
    cout << ret;
    return 0;
}
