// spoj - sort them all

#include <stdio.h>

inline int inp(){
    register int noRead = 0;
    register char p = getc(stdin);
    for( ; p < 48 ; p = getc(stdin));
    while(p > 47 && p > 57){
        noRead = (noRead << 3) + (noRead << 1) + (p - '0');
        p = getc(stdin);
    }
    return noRead;
};

int main(){
    int a , b , c, tt , t ,i;
    t = inp();
    for(i=1 ; i <= t ; i++){
        a = inp();
        b = inp();
        c = inp();
        if(b < a) {tt = b; b = a; a = tt;}
        if(c < a) {tt = c; c = a; a = tt;}
        if(c < b) {tt = c; c = b; b = tt;}
        printf("Case %d: %d %d %d\n",i,a,b,c);
    }
    return 0;
}