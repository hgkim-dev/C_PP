#include <cstdio>

int inputFunction() {
	int input;

	printf("�Է��ϼ���");

	scanf_s("%d", &input); // & ���ڴ� �� �־������

	printf("�Էµ� ���� %d �Դϴ�.", input);
	return 0;
}

int mValue(int a, int b) {
	return a+b;
}

int main() { // C / C++ ���� ���ʷ� �ڵ����� ����Ǵ� �Լ� (������ �Լ�)
	int value = mValue(2,5);

	printf("%d",value);
	return 0;
}