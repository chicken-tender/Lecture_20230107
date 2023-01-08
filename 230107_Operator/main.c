#include <stdio.h>

int main() {
	// sizeof
	// sizeof 연산자는 실행중에 작동하는 연산자가 아닙니다.
	// 컴파일 타임에 작동되는 연산자입니다.
	// 실행중에 변수나 데이타 타입의 바이트 사이즈 계산하기
	// 위해서 사용하시면 안됩니다.

	int a = 0;
	double b = 0.0;

	printf("int size = %d\n", sizeof(int));
	printf("a size = %d\n", sizeof(a));

	printf("double size = %d\n", sizeof(double));
	printf("b size = %d\n", sizeof(b));

	// , (쉼표연산자) 명령어 구분지어서 이어서 작성할때 사용합니다.
	int c = 0, d = 0, e = 0;

	printf("a = 0\n"), printf("b = 0\n");

	return 0;
}