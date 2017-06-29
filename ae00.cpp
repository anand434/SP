#include <iostream>
#include <cmath>
using namespace std;

int nof(int n){
    int k = ceil(sqrt(n)) , fq = 1;
    for(int i = 2 ; i <= k ; i++)
        if(n%k == 0)
            fq++;
    return fq;
}   

int main(){
    int t , ans = 0; 
    cin >> t;
    for(int i = 1; i <= t ; i++){
        ans += nof(i);
    }
    cout << ans;
    return 0;
}