// 비교 연산자, 논리 연산자

#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);

    int p=a>b;
    int q=a<b;
    int r=a==b;

    printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n",r);

    // 2>3 -> false (0)
    // true (1)
}