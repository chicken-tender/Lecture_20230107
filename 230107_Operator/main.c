#include <stdio.h>

int main() {
	// sizeof
	// sizeof �����ڴ� �����߿� �۵��ϴ� �����ڰ� �ƴմϴ�.
	// ������ Ÿ�ӿ� �۵��Ǵ� �������Դϴ�.
	// �����߿� ������ ����Ÿ Ÿ���� ����Ʈ ������ ����ϱ�
	// ���ؼ� ����Ͻø� �ȵ˴ϴ�.

	int a = 0;
	double b = 0.0;

	printf("int size = %d\n", sizeof(int));
	printf("a size = %d\n", sizeof(a));

	printf("double size = %d\n", sizeof(double));
	printf("b size = %d\n", sizeof(b));

	// , (��ǥ������) ��ɾ� ������� �̾ �ۼ��Ҷ� ����մϴ�.
	int c = 0, d = 0, e = 0;

	printf("a = 0\n"), printf("b = 0\n");

	return 0;
}