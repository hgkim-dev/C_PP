#include <cstdio>

int getInput() {
	int value = 0;
	fseek(stdin,0,SEEK_END);
	scanf_s("%d", &value);

	return value;
}

int main() {

	printf("���α��̸� �Է����ּ���. : ");
	int width = getInput();

	printf("���α��̸� �Է����ּ���. : ");
	int height = getInput();

	for (int i = 0; i < height; i++) {
		for (int k = 0; k < width; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}