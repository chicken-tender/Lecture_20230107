#include <stdio.h>
// ���� �� �簢��, ���� �� �簢��, �����ﰢ��, �� �����ﰢ��, ���ﰢ��, �� ���ﰢ��, �� �� ���ﰢ��, �� �� �����ﰢ��

int main() {
	printf("1. ���� �� �簢��\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("* ");
		}printf("\n");
	}
	printf("\n2. ���� �� �簢��\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0 || i == 9 || j == 0 || j == 9) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n3. �����ﰢ��\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n4. �� �����ﰢ��\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < (10-i); j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n5. ���ﰢ��\n");
	for (int i = 0; i < 11; i+=2) {
		for (int j = 0; j < (11 - i); j+=2) {
				printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n6. �� ���ﰢ��\n");
	for (int i = 0; i < 11; i += 2) {
		for (int j = 0; j <= i; j += 2) {
			printf(" ");
		}
		for (int k = 0; k < (11-i); k++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n7. �� �� ���ﰢ��\n");
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
	printf("\n8. �� �� �� ���ﰢ��\n");
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