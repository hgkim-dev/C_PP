#include <cstdio>

int Oper(int a, int b) {
	return a * b;
}

int main() {
	int value;
	int value2;
	int value3;

	printf("���� �Է� �� : ");
	scanf_s("%d", &value);
	printf("���� �Է� �� : ");
	scanf_s("%d", &value2);
	
	value3 = Oper(value, value2);
	printf("���� ���� %d �Դϴ�.",value3);
	return 0;
}