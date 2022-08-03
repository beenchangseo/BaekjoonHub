#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int a, b, T;

int main(){
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> a >> b;
        cout << "Case #"<< (i+1) << ": " << a+b << endl;
    }
    return 0;
}