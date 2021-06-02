#include <cstdio>

int getInput() {
	int value = 0;
	fseek(stdin,0,SEEK_END);
	scanf_s("%d", &value);

	return value;
}

int main() {

	printf("가로길이를 입력해주세요. : ");
	int width = getInput();

	printf("세로길이를 입력해주세요. : ");
	int height = getInput();

	for (int i = 0; i < height; i++) {
		for (int k = 0; k < width; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}