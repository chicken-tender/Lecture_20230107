#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���ù�(switch)
// ���� ���� ��ȭ�� ���� �б� ó���� �� ���.
// if-else if ���� �������� ����.

int main() {
	int buttonNum = 0;
	printf("�������� ��ȣ�� �Է��ϼ���.(0:TV�� 1:TV�� 2:������ 3:�����ٿ� ): ");
	scanf("%d", &buttonNum);

	switch (buttonNum) {
	case 1:
	{
		int i = 0; // case���� �ȿ��� ������ ���� ������ �߰�ȣ �� �����ϰ�, �� �ȿ� ���� ������ ��.
		printf("TV��\n");
		break;
	}
		
	case 2:
		printf("TV��\n");
		break;

	case 3:
		printf("������\n");
		break;

	case 4:
		printf("�����ٿ�\n");
		break;

	default: printf("�߸� �Է��ϼ̽��ϴ�.\n");
		break;
	}
	
	return 0;
}