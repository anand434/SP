#include <iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    ll k , n;
    while(t--){
        cin >> k;
        if(k % 2 == 1){
            k = (k + 1)/2;
            n = (1 + (k - 1) * 5) * 100 + 92;
        }else {
            k = k / 2;
            n = (4 + (k-1) * 5) * 100 + 42;
        }
        cout << n << endl;
    }
    return 0;
}