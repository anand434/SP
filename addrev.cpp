#include <iostream>
using namespace std;

int reverse(int a){
    int  rev = 0, rem;
    while(a!=0){
        rem= a % 10;
        rev = (rev * 10) + rem; 
        a /= 10;
    }
    return rev;
}

int main(){
    int t , a , b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        a = reverse(a);
        b = reverse(b);
        cout << reverse(a+b) << endl;
    }
    return 0;
}