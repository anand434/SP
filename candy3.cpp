#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        int a[n];
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum = (sum + a[i]) % n;
        }
        if(sum % n == 0)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }    
    return 0;
}