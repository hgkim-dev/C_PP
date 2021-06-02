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

	printf("처음 숫자를 입력해주세요 : ");
	int input1 = getInput();

	printf("다음 숫자를 입력해주세요 : ");
	int input2 = getInput();
	
	printf("연산자를 입력하세요 :  ");
	int opertation = getInput();

	if (opertation == 0) {
		result = sum(input1, input2);
		printf("결과 : %d", result);
	}
	else if (opertation == 1) {
		result = sub(input1, input2);
		printf("결과 : %d", result);
	}
	else if (opertation == 2) {
		result = ex(input1, input2);
		printf("결과 : %d", result);
	}
	else {
		printf("올바른 연산자가 아닙니다.");
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