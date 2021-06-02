#include <cstdio>

int main() {
	int pow;

	printf("정수를 입력하세요. : ");

	scanf_s("%d",&pow);

	pow = pow * pow;

	printf("제곱은 %d 입니다..",pow);

	return 0;
}