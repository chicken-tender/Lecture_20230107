#include <stdio.h>

int main() {
    // &(비트 And)
    // mask off
    // 특정자리의 비트값을 0으로 만드는 것

    // |(비트 OR)
    // mask on
    // 특정자리의 비트값을 1로 만드는 것


    // 01110101

    // 11111011

    // 01110001

    // 00000100

    // 01110101


    int a = 1;

    //   00000000 00000000 00000000 00000001
    //   00000000 00000000 00000000 00000010 2;
    //   00000000 00000000 00000000 00000100 4;
    a = a << 1; // 왼쪽 shift

    a = a << 1; // 왼쪽 shift

    // x2

    a = a << 2;   // 

    a = a >> 1; // 오른쪽 shift;


    return 0;
}