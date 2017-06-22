#include <iostream>
using namespace std;

int square(int n){
    int ans = 1;
    ans = n * (n+1) * (2*n +1);
    ans /= 6;
    return ans;
}

int main(){
    int n;
    cin >> n;
    while(n != 0){
        cout << square(n) << endl;
        cin >> n;
    }
    return 0;
}