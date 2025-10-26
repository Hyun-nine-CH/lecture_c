#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    // int sum=0;
    int i,sum;
    for(i=1,sum=0;i<=n;sum+=i,i++);
    printf("%d\n",sum);
}