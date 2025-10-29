#include <stdio.h>

int main(){
    //array
    int arr[]={3,1,4,1,5,9,2,6,5,3};

    // sizeof(int)로 나누는 이유는 값이 들어갈 주소의 단위 크기로 나눠줘야하기 때문이다.

    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
//  for(int i=0;i<=sizeof(arr)/sizeof(int)-1;i++){    
        printf("%d ",arr[i]);
    }
    printf("\n");
}