#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// goto문 : 무조건 분기

int main() {

	int number = 0;

Start: // 레이블: 프로그램의 코드 실행 위치

	printf("정수값을 입력하세요. : ");
	scanf("%d", &number); // 0보다 작은 수를 입력하면 종료

	if (number > 0) goto Start;
	else goto Exit;

	printf("종료중\n"); // 이 라인은 절대 실행되지 않음

Exit: // 레이블
	printf("종료됨\n");
	
	return 0;
}

