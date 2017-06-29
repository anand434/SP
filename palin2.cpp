// palin - the next palindrome

#include <bits/stdc++.h>
using namespace std;

void makepal(int len , int odd){
    int j , i , k = odd?len-1:len , carry = 1, a;
    for(; i>=0 || cary; i--,k++){
        
    }
}

int main(){
    int t;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        int l = str.length();
        mid = (l+1)/2;
        odd == (len & 1)?1:0;
        int i = mid - 1, j = mid, flag = 0;
        for(i = odd ? i-1 : i; i >= 0 && j < len; i--,j++){ 
            if(str[i] > str[j]) {
                str[j] = str[i];
                flag = 1;
            }
            else if(str[i] == str[j])
                str[j] = str[i];
            else break; 
        }
        if(!flag) makepal(mid, odd);
        cout << str << endl;
    }
    return 0;
}