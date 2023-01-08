#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned char light = 0;
	unsigned char mask = 1;
	int isOperator = 0;
	int roomNumber = 0;

	while (1) {
		printf("방의 전등을 조작하시겠습니까?(1:전등 켜기 2:전등 끄기 3: 끝내기) : ");
		scanf("%d", &isOperator);

		mask = 1;

		if (isOperator == 1) {
			printf("몇 번째 방불을 켜시겠습니까: ");
			scanf("%d", &roomNumber);

			mask <<= roomNumber;

			light |= mask;
			printf("light = %d\n", light);
		}
		else if (isOperator == 2) {
			printf("몇 번째 방불을 끄시겠습니까: ");
			scanf("%d", &roomNumber);

			mask <<= roomNumber;

			light &= ~mask;
			printf("light = %d\n", light);
		}
		else {
			printf("전등 조작을 마칩니다.");
			break;
		}
	}
	return 0;

}