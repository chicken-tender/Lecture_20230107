// xor�� ����ϰ� a, b ������ ����ؼ� (�ٸ� ������ ������� ������)
// a������ ���� b������ ���� �ٲ㺸����.
/*
����)
a = 2; 00000010
b = 3; 00000011
       00000001 b = a ^ b
	   
	   00000001 b
	   00000010 a
	   00000011 a = b ^ a

	   00000011
	   00000001 
	            b = a ^ b

���)
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