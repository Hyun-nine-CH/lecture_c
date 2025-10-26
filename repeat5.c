#include <stdio.h>

int main(){
    //1,2,4,8,16,32, ...
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i*=2){
        printf("%d\n",i);
    }

    // { 중괄호 안에서 선언된 변수는 그 안에서만 존재 여부가 공유된다. }
    // printf("%d\n",i);
}