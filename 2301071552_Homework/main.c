// xor를 사용하고 a, b 변수만 사용해서 (다른 변수를 사용하지 마세요)
// a변수의 값과 b변수의 값을 바꿔보세요.
/*
예시)
a = 2; 00000010
b = 3; 00000011
       00000001 b = a ^ b
	   
	   00000001 b
	   00000010 a
	   00000011 a = b ^ a

	   00000011
	   00000001 
	            b = a ^ b

출력)
a = 3;
b = 2;
*/
#include <stdio.h>

int main() {
	unsigned char a = 2;
	unsigned char b = 3;

	b = a ^ b;
	a = b ^ a;
	b = a ^ b;
	printf("a : %d\nb : %d\n",a,b);

	return 0;
}