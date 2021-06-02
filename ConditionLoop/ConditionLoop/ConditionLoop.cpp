#include <cstdio>

int main() {
	int mVal;

	printf("반복될 숫자를 입력하세요.: ");
	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &mVal);

	if (mVal <= 0) {
		printf("입력된 값이 0 보다 작거나 같습니다.");
	}
	else {
		for (int i = 0; i < mVal; i++) {
			printf("A");
		}
	}


	printf("두번 쨰 반복될 숫자를 입력하세요. : ");
	fseek(stdin,0,SEEK_END);
	scanf_s("%d", &mVal);
	if (mVal <=0) {
		printf("잘못입력되었습니다.");
	}
	else {
		for (int i = 0; i < mVal; i++) {
			printf("B");
		}
	}

	return 0;
}