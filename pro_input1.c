/*
2. 체중과 키를 입력받아서 체질량 지수를 구하는 프로그램을 만들어 보세요.
*/

#include <stdio.h>

/*  body mass index, BMI  */
/*
BMI= w/(t^2)
*/

int main(){
    float w, t;
    printf("your weights[kg]: ");
    scanf("%f",&w);
    printf("your heights[m]: ");
    scanf("%f",&t);
    printf("your BMI: %f\n",w/(t*t));
}