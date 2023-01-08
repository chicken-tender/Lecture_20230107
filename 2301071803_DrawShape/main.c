#include <stdio.h>
// 속이 찬 사각형, 속이 빈 사각형, 직각삼각형, 역 직각삼각형, 정삼각형, 역 정삼각형, 속 빈 정삼각형, 속 빈 역정삼각형

int main() {
	printf("1. 속이 찬 사각형\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("* ");
		}printf("\n");
	}
	printf("\n2. 속이 빈 사각형\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0 || i == 9 || j == 0 || j == 9) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n3. 직각삼각형\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n4. 역 직각삼각형\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < (10-i); j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n5. 정삼각형\n");
	for (int i = 0; i < 11; i+=2) {
		for (int j = 0; j < (11 - i); j+=2) {
				printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n6. 역 정삼각형\n");
	for (int i = 0; i < 11; i += 2) {
		for (int j = 0; j <= i; j += 2) {
			printf(" ");
		}
		for (int k = 0; k < (11-i); k++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n7. 속 빈 정삼각형\n");
	for (int i = 0; i < 11; i += 2) {
		for (int j = 0; j < (11 - i); j += 2) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			if (k == 0 || k == i || i == 10) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	printf("\n8. 속 빈 역 정삼각형\n");
	for (int i = 0; i < 11; i += 2) {
		for (int j = 0; j <= i; j += 2) {
			printf(" ");
		}
			for (int k = 0; k < (11-i); k++) {
				if (k == 0 || i == 0 || k == (10-i)) printf("*");
				else printf(" ");
		}
		printf("\n");
	}

	return 0;
}