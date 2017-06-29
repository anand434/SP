#include <bits/stdc++.h>
using namespace std;

string a , b;

int dist(int m , int n , vector < vector <int> > & ans) {
    if(m == 0)
        return n;
    else if(n == 0)
        return m;
    if(ans[m][n] == -1){
        ans[m][n] = min(dist(m-1, n , ans) , dist(m , n - 1 , ans))
            + 1;
        if(a[m-1] == b[n-1])
            ans[m][n] = min(ans[m][n], dist(m-1 , n-1 , ans));
        else
            ans[m][n] = min(ans[m][n], dist(m-1 , n-1 , ans) + 1);
    }
    return ans[m][n];
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        int m = a.length();
        int n = b.length();
        vector < vector <int> > ans(m+1 , vector <int> (n + 1 , -1));
        cout << dist(m , n , ans) << endl; 
    }
    return 0;
}