#include <cstdio>

int Oper(int a, int b) {
	return a * b;
}

int main() {
	int value;
	int value2;
	int value3;

	printf("최초 입력 값 : ");
	scanf_s("%d", &value);
	printf("다음 입력 값 : ");
	scanf_s("%d", &value2);
	
	value3 = Oper(value, value2);
	printf("제곱 값은 %d 입니다.",value3);
	return 0;
}