#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n; 
    while(n>=0){
        int a[n];
        long int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];    sum += a[i];
        }
        float extra = ((float)sum/(float)n);
        // checking decimal value
        if(floor(extra) != ceil(extra)){
            cout << "-1\n";    cin >> n;
            continue;
        }
        long int ans = 0;
        for(int i = 0; i < n; ++i)
            if(a[i] > extra)    ans += (a[i] - extra);
        cout << ans << endl;
        cin >> n;
    }
    return 0;
}