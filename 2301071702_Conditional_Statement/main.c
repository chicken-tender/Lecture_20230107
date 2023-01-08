#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 선택문(switch)
// 정수 값의 변화에 따라서 분기 처리할 때 사용.
// if-else if 보다 가독성이 좋음.

int main() {
	int buttonNum = 0;
	printf("리모컨의 번호를 입력하세요.(0:TV꺼 1:TV켜 2:볼륨업 3:볼륨다운 ): ");
	scanf("%d", &buttonNum);

	switch (buttonNum) {
	case 1:
	{
		int i = 0; // case구문 안에서 변수를 만들 때에는 중괄호 블럭 생성하고, 그 안에 변수 만들어야 함.
		printf("TV꺼\n");
		break;
	}
		
	case 2:
		printf("TV켜\n");
		break;

	case 3:
		printf("볼륨업\n");
		break;

	case 4:
		printf("볼륨다운\n");
		break;

	default: printf("잘못 입력하셨습니다.\n");
		break;
	}
	
	return 0;
}