#include <stdio.h>

int main() {
	// 제어문
	// 프로그램의 일방적인 실행흐름을 제어해야 할 필요성이 있다.
	// 이 때 사용하는 것을 제어문이라고 함.
	/*
	1. 조건문
	  - 분기문(분기란? 실행의 흐름을 다른쪽으로 보내는 것)
	    : 조건분기 (if, if-else, is-else-if)
	  - 무조건 분기문
	    : goto문
      - 선택문(switch)
	2. 반복문(for, while, do-while)
	*/

	int a = 20;

	if (a > 20) { // 단일 조건문
		printf("a는 20보다 크다.\n");
	}

	if (a < 20) {
		printf("a는 20보다 작다.\n");
	}
	else {
		printf("a는 20보다 크다.\n");
	}

	// C언어에서는 정수값을 가지고 논리값을 처리하는 특성이 있어서 정수식도 가능하다.
	if (a - 20) {
		printf("a는 20이 아니다.\n");
	}
	else {
		printf("a는 20이다.\n");
	}

	return 0;

}