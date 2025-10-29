#include <stdio.h>
#include <string.h> // strlen 함수

int main(){
    char str[100];
    int len;
    len=strlen(str);
    // int n = scanf("%s",s); 함수의 형태로 변형
    // sizeof()/sizeof(char)-1을 리턴하는 라이브러리 함수

    printf("문자열의 길이는 %d\n",len); // 빈 공백 1byte[char]

    char str1[]="Hello";
    char str2[100];

    strcpy(str2,str1); // 저장할 그릇, 그 안에 들어갈 값
    printf("str2의 값: %s\n",str2);
}