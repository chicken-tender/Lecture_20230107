#include <stdio.h>
// �ݺ���
// Ư���� ��ɾ �ݺ������� ������ �� ���
// for���� �ݺ� Ƚ���� �ƴ� ��쿡 ����ϱ� ���� ����
int main() {
	int count = 0;
	// for(�ʱ��; ���ǽ�; ������) { ��ɾ� }
	for (int i = 0; i < 10; i++) {
		printf("*");
	}
	
	printf("\n\n");
	
	// ���ǽ� ���� ����
	for (int i = 0; ; i++) {
		if (i > 10) break;
		printf("count = %d\n", count);
	}

	printf("\n");

	// ��ø ����
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("*");
		} printf("\n");
	}

	printf("\n\n");

	// �ʱ��,���ǽ�,�����Ŀ� ���� ������ ���� �� ����
	for (int i = 0, j = 10; i < 10 && j>0; i += 2, j -= 2) {
		printf("i = %d, j = %d\n", i, j);
	}

	printf("\n\n");

	// �Ǽ��ĵ� ����!
	for (float a = 0.0f; a < 10.34f; a += 0.2f) {
		printf("*");
	} printf("\n");

	return 0;
}