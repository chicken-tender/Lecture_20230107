#include <stdio.h>

int main() {
	// ���
	// ���α׷��� �Ϲ����� �����帧�� �����ؾ� �� �ʿ伺�� �ִ�.
	// �� �� ����ϴ� ���� ����̶�� ��.
	/*
	1. ���ǹ�
	  - �б⹮(�б��? ������ �帧�� �ٸ������� ������ ��)
	    : ���Ǻб� (if, if-else, is-else-if)
	  - ������ �б⹮
	    : goto��
      - ���ù�(switch)
	2. �ݺ���(for, while, do-while)
	*/

	int a = 20;

	if (a > 20) { // ���� ���ǹ�
		printf("a�� 20���� ũ��.\n");
	}

	if (a < 20) {
		printf("a�� 20���� �۴�.\n");
	}
	else {
		printf("a�� 20���� ũ��.\n");
	}

	// C������ �������� ������ �������� ó���ϴ� Ư���� �־ �����ĵ� �����ϴ�.
	if (a - 20) {
		printf("a�� 20�� �ƴϴ�.\n");
	}
	else {
		printf("a�� 20�̴�.\n");
	}

	return 0;

}