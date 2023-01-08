#include <stdio.h>
// while문은 반복횟수를 모르는 경우에 사용하기 좋은 구조
// 반복횟수는 모르나 while문의 소괄호 안에 조건만 만족한다면 몇 번을 반복해도 상관없을 때 사용하기 좋음.

int main() {
	float value = 343.34f;

	printf("while문\n\n");
	while (value > 0) {
		value -= 12.3f;
		printf("value = %f\n", value);
	}

	printf("do-while문\n\n");
	do {
		value += 11.234f;
		printf("value = %f\n", value);
	} while (value < 2000.0f);

	return 0;
}