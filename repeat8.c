#include <stdio.h>
#include <stdbool.h>

/* 무한 루프 */
/*
int main(){
    for(int i=1; true; i++){
        printf("%d ",i);
    }
}
*/

int main(){
    int i;
    scanf("%d",&i);

    for(;;i++){
        printf("%d ",i);
    } // for문 안의 인자를 안넣어도 조건은 true로 기본 설정이 되어 돌아간다.

    /*
    for(;true;){
        printf("&d ",i);
        if(){
            i++;
        }
    }
    */
}