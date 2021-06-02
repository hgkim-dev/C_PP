#include <cstdio>

int inputFunction() {
	int input;

	printf("입력하세요");

	scanf_s("%d", &input); // & 문자는 꼭 넣어줘야함

	printf("입력된 값은 %d 입니다.", input);
	return 0;
}

int mValue(int a, int b) {
	return a+b;
}

int main() { // C / C++ 에서 최초로 자동으로 실행되는 함수 (진입자 함수)
	int value = mValue(2,5);

	printf("%d",value);
	return 0;
}