#include <stdio.h>
#include <string.h>

int main(){
    char str[100]="hello ";
    strcat(str,"World! ");
    strcat(str,"World! ");
    strcat(str,"World! ");
    strcat(str,"World! ");        

    printf("%s\n",str);
}