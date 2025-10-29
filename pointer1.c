#include <stdio.h>

int main(){
    int a=10;

    // 포인터의 기능을 사용
    // 특정 값 a의 주소 값을 *ptr(포인터 변수)에 저장
    int *ptr_a=&a; // int *ptr_a가 선언이 된 상태에서 동시에 초기화
    
    // *ptr_a=20; 이거랑 전혀 다름, 단, int *ptr_a가 미리 선언되어 있어야됨
    // 포인터 a가 가리키는 변수 a에 20을 저장

    printf("ptr_a의 값: %d\n",ptr_a);
    printf("ptr_a+1의 값: %d\n",ptr_a+1);

}