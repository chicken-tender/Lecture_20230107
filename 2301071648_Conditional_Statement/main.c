#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int money = 0;

	printf("�뵷 �ݾ��� �Է��ϼ���. : ");
	scanf("%d", &money);

	//���� ���ǹ� : ������ ������ ���� ��
	// ���� �������� ���� ���� ū ������ ���� ������ �߶� ������ ������ ����
	// ���� ������ ��Ȯ�ϰ� �������� ����°� ����.
	if (money > 100000) {
		printf("�ǽù�\n");
	}
	else if (money <= 100000 && money > 80000) {
		printf("��ȭ����\n");
	}
	else if (money <= 80000 && money > 60000) {
		printf("ģ������\n");
	}
	else if (money <= 60000 && money > 40000) {
		printf("�߱���\n");
	}
	else { // ��������
		printf("����\n");
	}

	return 0;

}

