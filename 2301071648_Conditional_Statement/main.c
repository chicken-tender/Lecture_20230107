#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int money = 0;

	printf("용돈 금액을 입력하세요. : ");
	scanf("%d", &money);

	//다중 조건문 : 조건이 여러개 있을 때
	// 값을 조건으로 따질 때는 큰 값부터 작은 값으로 잘라서 조건을 만들지 말고
	// 값의 범위를 명확하게 조건으로 만드는게 좋음.
	if (money > 100000) {
		printf("피시방\n");
	}
	else if (money <= 100000 && money > 80000) {
		printf("영화관람\n");
	}
	else if (money <= 80000 && money > 60000) {
		printf("친구만남\n");
	}
	else if (money <= 60000 && money > 40000) {
		printf("중국집\n");
	}
	else { // 생략가능
		printf("낮잠\n");
	}

	return 0;

}

