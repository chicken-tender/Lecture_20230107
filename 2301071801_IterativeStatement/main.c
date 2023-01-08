#include <stdio.h>

int main() {

    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0) { // 짝수는 건너띄고 홀수만 출력
            continue;   // 반복문에서 continue문을 만나면 continue문 이후의 코드를
            // 건너 뛰어서 실행됩니다.
        }

        printf("i = %d\n", i);
    }


    int count = 1000;
    int count1 = 10000;
    int count2 = 20000;

    int flag = 0;
    // 중첩된 반복문을 탈출할때 
    // flag값을 사용.
    while (count > 0) {
        count -= 10;
        while (count1 > 0) {
            count1 -= 100;
            while (count2 > 0) {
                count2 -= 10;

                printf("count = %d, count1 = %d, count2 = %d\n", count, count1, count2);
                if (count < 100 && count1 < 100 && count2 < 100) {

                    flag = 1;
                    break;   // 가장 가까운 반복문을 탈출할 때 break문을 사용
                }
            }

            if (flag == 1) break;
        }

        if (flag == 1) break;
    }

    printf("\n\n\ngoto문 사용\n");
    count = 1000;
    count1 = 10000;
    count2 = 20000;

    // goto 문을 사용하여 중첩된 반복문을 한번에 탈출
    while (count > 0) {
        count -= 10;
        while (count1 > 0) {
            count1 -= 100;
            while (count2 > 0) {
                count2 -= 10;

                printf("count = %d, count1 = %d, count2 = %d\n", count, count1, count2);
                if (count < 100 && count1 < 100 && count2 < 100) {

                    goto LoopExit;   // goto문으로 중첩된 반복문을 한번에 탈출
                }
            }
        }
    }

LoopExit:


    return 0;
}