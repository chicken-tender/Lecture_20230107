#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// goto�� : ������ �б�

int main() {

	int number = 0;

Start: // ���̺�: ���α׷��� �ڵ� ���� ��ġ

	printf("�������� �Է��ϼ���. : ");
	scanf("%d", &number); // 0���� ���� ���� �Է��ϸ� ����

	if (number > 0) goto Start;
	else goto Exit;

	printf("������\n"); // �� ������ ���� ������� ����

Exit: // ���̺�
	printf("�����\n");
	
	return 0;
}

