/*
2^0=1 ~ 2^6=64 ~...
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    // int t=1;
    for(int i=0,t=1;i<=n;i++,t*=2){
        printf("2^%d= %d\n",i,t);
        t*=2;
    }
}