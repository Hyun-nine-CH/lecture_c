// char: 1byte integer type
// character: string (반각문자 ABCabc12378_+\;/#%) 한글, 한자, 일본어 ...

#include <stdio.h>

int main(){
    char a=67;

    printf("%c\n",a);
    printf("%c\n",67);
    printf("%c\n",'C');
    printf("%d\n",'C'); // 'C'==67
}

// ASCII : American Standard (문자-숫자)