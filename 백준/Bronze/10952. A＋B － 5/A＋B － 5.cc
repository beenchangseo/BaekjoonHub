#include <iostream>
using namespace std;
int a,b;
int main(){
    while((cin >> a >> b) && a != 0 && b != 0){
      cout << a+b << '\n';  
    }
    return 0;
}