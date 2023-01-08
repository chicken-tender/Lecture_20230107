#include <stdio.h>

int main() {
	int a = 20;
	int b = 30;

	int max = (a > b) ? a : b;
	printf("%d와 %d중 큰 값은 %d\n", a, b,max);

	(a > b) ? printf("a:%d와 b:%d중에 a값이 크다.\n",a,b) : printf("a:%d와 b:%d중에 b값이 크다.\n",a,b);

	return 0;
}