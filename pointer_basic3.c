// 2중 포인터

#include <stdio.h>

int main(){
    int a=10;

    int *ptr;
    ptr=&a;

    int **ptr_ptr;
    ptr_ptr=&ptr;

    printf("a=%d\n",a);
    printf("&a=%d\n",&a);

    printf("ptr=%d\n",ptr);
    printf("&ptr=%d\n",&ptr);

    printf("ptr_ptr=%d\n",ptr_ptr);
    printf("ptr_ptr=%d\n",*ptr_ptr); // ptr에 저장된 값이 출력됨
    printf("ptr_ptr=%d\n",**ptr_ptr); // *(*ptr_ptr) = *ptr -> a
}