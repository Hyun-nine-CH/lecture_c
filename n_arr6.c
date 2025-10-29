#include <stdio.h>
#include <string.h> // C++에는 string type이 존재함

int main(){
    char str1[]="sample";
    char str2[]="simple";

    // str1이 str2보다 사전순으로 앞에 위치: -1
    // str1이 str2와 같다: 0
    // str1이 str2보다 사전순으로 뒤에 위치: 1
    int cmp=strcmp(str1,str2);
    printf("%d\n",cmp);
}