#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
void print(stack<char> &s) {
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string str; stack<char> s;
    bool isTag = false;
    getline(cin, str);
    for(auto ch:str){
        if (ch == '<'){
            print(s);
            isTag = true;
            cout << ch;
        }else if (ch == '>'){
            isTag = false;
            cout << ch;
        }else if (isTag){
            cout << ch;
        }else {
            if (ch == ' '){
                print(s);
                cout << ' ';
            }else{
                s.push(ch);
            }
        }
    }
    print(s);
    cout << '\n';
    return 0;
}



