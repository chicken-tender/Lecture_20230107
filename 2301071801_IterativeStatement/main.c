#include <stdio.h>

int main() {

    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0) { // ¦���� �ǳʶ�� Ȧ���� ���
            continue;   // �ݺ������� continue���� ������ continue�� ������ �ڵ带
            // �ǳ� �پ ����˴ϴ�.
        }

        printf("i = %d\n", i);
    }


    int count = 1000;
    int count1 = 10000;
    int count2 = 20000;

    int flag = 0;
    // ��ø�� �ݺ����� Ż���Ҷ� 
    // flag���� ���.
    while (count > 0) {
        count -= 10;
        while (count1 > 0) {
            count1 -= 100;
            while (count2 > 0) {
                count2 -= 10;

                printf("count = %d, count1 = %d, count2 = %d\n", count, count1, count2);
                if (count < 100 && count1 < 100 && count2 < 100) {

                    flag = 1;
                    break;   // ���� ����� �ݺ����� Ż���� �� break���� ���
                }
            }

            if (flag == 1) break;
        }

        if (flag == 1) break;
    }

    printf("\n\n\ngoto�� ���\n");
    count = 1000;
    count1 = 10000;
    count2 = 20000;

    // goto ���� ����Ͽ� ��ø�� �ݺ����� �ѹ��� Ż��
    while (count > 0) {
        count -= 10;
        while (count1 > 0) {
            count1 -= 100;
            while (count2 > 0) {
                count2 -= 10;

                printf("count = %d, count1 = %d, count2 = %d\n", count, count1, count2);
                if (count < 100 && count1 < 100 && count2 < 100) {

                    goto LoopExit;   // goto������ ��ø�� �ݺ����� �ѹ��� Ż��
                }
            }
        }
    }

LoopExit:


    return 0;
}