#include <stdio.h>

int main() {
	// 비트 연산자
	/*
	&(비트 and)
	|(비트 or)
	~(비트 not)
	^(배타적 OR)
	<<(왼쪽 shift)
	>>(오른쪽 shift)
	*/

	unsigned char a = 2;
	unsigned char b = 3;
	// a: 00000010
	// b: 00000011

	// a & b : 00000010
	// a | b : 00000011
	// ~a : 11111101
	// a ^ b : 00000001 (두 비트가 같으면 0, 다르면 1)

	unsigned char ret = a & b;
	printf("a & b : %d\n", ret);

	ret = a | b;
	printf("a | b : %d\n", ret);

	ret = ~a;
	printf("~a : %d\n", ret);

	ret = a ^ b;
	printf("a ^ b : %d\n", ret);

	return 0;
}