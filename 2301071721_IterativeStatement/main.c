#include <stdio.h>
// 반복문
// 특정한 명령어를 반복적으로 실행할 때 사용
// for문은 반복 횟수를 아는 경우에 사용하기 좋은 구조
int main() {
	int count = 0;
	// for(초기식; 조건식; 증감식) { 명령어 }
	for (int i = 0; i < 10; i++) {
		printf("*");
	}
	
	printf("\n\n");
	
	// 조건식 생략 가능
	for (int i = 0; ; i++) {
		if (i > 10) break;
		printf("count = %d\n", count);
	}

	printf("\n");

	// 중첩 가능
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("*");
		} printf("\n");
	}

	printf("\n\n");

	// 초기식,조건식,증감식에 여러 변수를 넣을 수 있음
	for (int i = 0, j = 10; i < 10 && j>0; i += 2, j -= 2) {
		printf("i = %d, j = %d\n", i, j);
	}

	printf("\n\n");

	// 실수식도 가능!
	for (float a = 0.0f; a < 10.34f; a += 0.2f) {
		printf("*");
	} printf("\n");

	return 0;
}