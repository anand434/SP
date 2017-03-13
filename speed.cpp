#include <bits/stdc++.h>
//includes all necessarry libraries
using namespace std;

int gcd(int x , int y){
    if(min(x , y)==0)
        return max(x , y);
    return gcd(max(x , y) % min(x , y) , min(x , y));    
}

int main(){
    int t , v1 , v2 , rel_vel;
    cin>>t;
    while(t--){
        cin>>v1>>v2;
        if(v1 < 0  && v2 < 0){
            v1 *= -1;
            v2 *= -1;
        }
    rel_vel = v1 - v2 ;
    if(rel_vel < 0)
        rel_vel *= -1;
    cout<<rel_vel/gcd(rel_vel , max(v1 ,v2))<<endl;
    }
    return 0;
}