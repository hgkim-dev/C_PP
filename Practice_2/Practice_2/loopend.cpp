#include <cstdio>

int plus(int a, int b) {

	return a + b;
}

int minus(int a, int b) {

	return a - b;
}

int power(int a, int b) { // �ŵ�����
	int val1 = 1;

	for (int i = 0; i < b; i++) {
		val1 = val1 * a;
	}

	return val1;
}

int getInput() {
	int input = 0;
	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &input);
	return input;
}

int main() {
	printf("input1 ���ڸ� �Է����ּ��� : ");
	int input1 = getInput();
	printf("input2 ���ڸ� �Է����ּ��� : ");
	int input2 = getInput();
	printf("Opertaion ���ڸ� �Է����ּ��� : ");
	int operation = getInput();

	int result = 0;

	if (operation == 0) {
		result = plus(input1, input2);
		printf("���ϱ� ��� : %d", result);
	}
	else if (operation == 1) {
		result = minus(input1, input2);
		printf("���� ��� :  %d", result);
	}
	else if (operation == 2) {
		result = power(input1, input2);
		printf("�ŵ����� ��� : %d", result);
	}
	else {
		printf("Error!! 0~2 ���ڰ� �ƴմϴ�.!");
	}


	return 0;
}