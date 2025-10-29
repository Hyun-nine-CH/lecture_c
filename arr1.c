#include <stdio.h>

int main(){
    int n;
    int arr[100];

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i])max=arr[i]; // 순차적으로 가장 큰 값을 찾기
    }
    printf("%d\n",max);
}