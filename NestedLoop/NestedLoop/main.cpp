#include <cstdio>

int main() {

	for (; ;) {
		printf("�ݺ��� ���ڸ� �Է����ּ���. : ");
		int input; 
		fseek(stdin, 0, SEEK_END);
		scanf_s("%d",&input);

		if (input == 0) {
			continue;
		}
		else if (input == 1) {
			printf("�ݺ����� ������ �Դϴ�.");
			break;
		}
		printf("���� ���ڰ� �ƴմϴ�.");
	}
	printf("���α׷��� ����Ǿ����ϴ�.");
	return 0;
}