#include <stdio.h>

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    printf("arr의 값: %d\n",arr);
    for(int i=0;i<10;i++){
        printf("&arr[%d]= %d\n",i,&arr[i]);
        printf("arr+i=%d\n",arr+i);
    }
    printf("\n");
    // arr =(동치)= &arr[0]
    // arr+i =(동치)= &arr[i]

    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(int i=0;i<10;i++){
        printf("%d ",*(arr+i)); // "arr+i"라는 주소값에 들어 있는 값을 출력 = "*(&arr[i])"
    }
    printf("\n");

    for(int *ptr=arr;ptr<arr+10;ptr++){ // 사실상, ptr+=4
        printf("%d ",*ptr);
    }
    printf("\n");
}