#include <iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    ll a;
    while(t--){
        cin >> a; ll ans = 0;
        while(a >= 5){
            ans += (a/5);
            a /= 5;
        }
        cout << ans << endl;
    }
    return 0;
}