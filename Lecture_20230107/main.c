#include <stdio.h>

int main() {
	int a = 20;
	int b = 30;

	int max = (a > b) ? a : b;
	printf("%d�� %d�� ū ���� %d\n", a, b,max);

	(a > b) ? printf("a:%d�� b:%d�߿� a���� ũ��.\n",a,b) : printf("a:%d�� b:%d�߿� b���� ũ��.\n",a,b);

	return 0;
}