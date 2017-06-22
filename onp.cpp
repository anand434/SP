#include <bits/stdc++.h>
using namespace std;

int main(){   
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        stack <char> s;
        for(int i = 0; i < str.length(); i++){
            if(isalpha(str[i]))
                cout << str[i];
            else if(str[i] == ')'){
                cout << s.top();
                s.pop();
            }else if(str[i] != '(')
                s.push(str[i]);
        }
        cout << endl;
    }
    return 0;
}