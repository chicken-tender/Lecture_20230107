#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned char light = 0;
	unsigned char mask = 1;
	int isOperator = 0;
	int roomNumber = 0;

	while (1) {
		printf("���� ������ �����Ͻðڽ��ϱ�?(1:���� �ѱ� 2:���� ���� 3: ������) : ");
		scanf("%d", &isOperator);

		mask = 1;

		if (isOperator == 1) {
			printf("�� ��° ����� �ѽðڽ��ϱ�: ");
			scanf("%d", &roomNumber);

			mask <<= roomNumber;

			light |= mask;
			printf("light = %d\n", light);
		}
		else if (isOperator == 2) {
			printf("�� ��° ����� ���ðڽ��ϱ�: ");
			scanf("%d", &roomNumber);

			mask <<= roomNumber;

			light &= ~mask;
			printf("light = %d\n", light);
		}
		else {
			printf("���� ������ ��Ĩ�ϴ�.");
			break;
		}
	}
	return 0;

}