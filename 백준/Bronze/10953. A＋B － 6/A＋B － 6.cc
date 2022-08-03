#include <iostream>
using namespace std;
int a,b,T;
char c;
int main(){
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> a >> c >> b;
        cout << a+b << endl;
    }
    return 0;
}