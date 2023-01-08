#include <stdio.h>

int main() {
	// ��Ʈ ������
	/*
	&(��Ʈ and)
	|(��Ʈ or)
	~(��Ʈ not)
	^(��Ÿ�� OR)
	<<(���� shift)
	>>(������ shift)
	*/

	unsigned char a = 2;
	unsigned char b = 3;
	// a: 00000010
	// b: 00000011

	// a & b : 00000010
	// a | b : 00000011
	// ~a : 11111101
	// a ^ b : 00000001 (�� ��Ʈ�� ������ 0, �ٸ��� 1)

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