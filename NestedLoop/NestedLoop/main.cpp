#include <cstdio>

int main() {

	for (; ;) {
		printf("반복될 숫자를 입력해주세요. : ");
		int input; 
		fseek(stdin, 0, SEEK_END);
		scanf_s("%d",&input);

		if (input == 0) {
			continue;
		}
		else if (input == 1) {
			printf("반복문의 마지막 입니다.");
			break;
		}
		printf("허용된 숫자가 아닙니다.");
	}
	printf("프로그램이 종료되었습니다.");
	return 0;
}