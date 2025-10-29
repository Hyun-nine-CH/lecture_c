#include <stdio.h>

int main(){
    char arr[]="Hello, woeld!"; // 13개

    printf("%s\n",arr);
    printf("배열의 크기: %lu\n",sizeof(arr)/sizeof(char));
    // 14개, 문자열을 구분하는 척도 NULL, "\0"은 문자열의 내용의 마지막에 붙게 된다.
}