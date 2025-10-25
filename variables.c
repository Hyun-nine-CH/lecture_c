#include <stdio.h>

int main() {
    printf("%lu %lu %lu %lu\n", sizeof(int),sizeof(char),sizeof(float),sizeof(double));

    int a; char b; float c; double d;
    printf("%lu %lu %lu %lu\n", sizeof(a),sizeof(b),sizeof(c),sizeof(d));
}

// sizeof(x): x의 크기를 출력
// x: 자료형