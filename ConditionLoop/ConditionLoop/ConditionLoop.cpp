#include <cstdio>

int main() {
	int mVal;

	printf("�ݺ��� ���ڸ� �Է��ϼ���.: ");
	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &mVal);

	if (mVal <= 0) {
		printf("�Էµ� ���� 0 ���� �۰ų� �����ϴ�.");
	}
	else {
		for (int i = 0; i < mVal; i++) {
			printf("A");
		}
	}


	printf("�ι� �� �ݺ��� ���ڸ� �Է��ϼ���. : ");
	fseek(stdin,0,SEEK_END);
	scanf_s("%d", &mVal);
	if (mVal <=0) {
		printf("�߸��ԷµǾ����ϴ�.");
	}
	else {
		for (int i = 0; i < mVal; i++) {
			printf("B");
		}
	}

	return 0;
}