#include <stdio.h>
// while���� �ݺ�Ƚ���� �𸣴� ��쿡 ����ϱ� ���� ����
// �ݺ�Ƚ���� �𸣳� while���� �Ұ�ȣ �ȿ� ���Ǹ� �����Ѵٸ� �� ���� �ݺ��ص� ������� �� ����ϱ� ����.

int main() {
	float value = 343.34f;

	printf("while��\n\n");
	while (value > 0) {
		value -= 12.3f;
		printf("value = %f\n", value);
	}

	printf("do-while��\n\n");
	do {
		value += 11.234f;
		printf("value = %f\n", value);
	} while (value < 2000.0f);

	return 0;
}