#include <cstdio>
/*
int getInput() {
	int input;

	fseek(stdin,0,SEEK_END);
	scanf_s("%d", &input);

	return input;
}

int sum(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int ex(int a, int b) {

	int value = 1;

	for (int i = 0; i < b; i++) {
		value = value * a;
	}

	return value;
}

int main(int argc, char* argv[]) {

	int result;

	printf("ó�� ���ڸ� �Է����ּ��� : ");
	int input1 = getInput();

	printf("���� ���ڸ� �Է����ּ��� : ");
	int input2 = getInput();
	
	printf("�����ڸ� �Է��ϼ��� :  ");
	int opertation = getInput();

	if (opertation == 0) {
		result = sum(input1, input2);
		printf("��� : %d", result);
	}
	else if (opertation == 1) {
		result = sub(input1, input2);
		printf("��� : %d", result);
	}
	else if (opertation == 2) {
		result = ex(input1, input2);
		printf("��� : %d", result);
	}
	else {
		printf("�ùٸ� �����ڰ� �ƴմϴ�.");
	}

	return 0;
}*/



int main(int argc, char* argv[]) {

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 10; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}