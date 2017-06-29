#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    unsigned ll ans , n;
    while(t--){
        cin >> n;
        if(n%2 == 0)
            ans = n * (n+2) * (2 * n + 1 ) / 8;
        else
            ans = (n*(n+2)*(2*n+1)-1)/8;
        cout << ans << endl;
    }
    return 0;
}