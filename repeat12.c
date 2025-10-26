// break [O]
// continue [ ]
// 중첩 for문 [ ]

// 숫자 입력 -> 숫자 출력
// 1번째: 7
// 2번째: 5
// ...
// (15번째: 0, 생략) <- break

#include <stdio.h>
int main(){
    for(int i=1; ; i++){
        int k;
        scanf("%d",&k);
        if(k==0){
            break;
        }
        printf("%d번째: %d\n",i,k);
    }
}