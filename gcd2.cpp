#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0)  return a;
    else    return  gcd(b , a%b);
}

int main(){
    int q , a , b;
    cin >> q;
    while(q--){
        cin >> a >> b; 
        cout << gcd(a , b) << endl; 
    }
    return 0;
}