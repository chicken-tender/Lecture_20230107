#include <stdio.h>

int main() {
	// 증감연산자 ++, --
	// 정수형 변수에 사용하는 연산자
	// 변수의 값을 1 증가시키거나 1 감소시킬 때 사용

	int a = 20;
	int b = 0;

	++a;
	printf("%d\n", a);

	a++;
	printf("%d\n", a);
	//증감연산자가 단독으로 쓰이면 전위식,후위식 상관없이 1증가됨.

	b = ++a;
	// 전위식은 증가 후 변수 대입
	// a = a + 1
	// b = a
	printf("%d, %d\n", a, b);

	b = a++;
	// 후위식은 변수 대입 후 증가
	// b = a
	// a = a + 1
	printf("%d, %d\n", a, b);

	return 0;
}