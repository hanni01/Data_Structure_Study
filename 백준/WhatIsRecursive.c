#include <stdio.h>

void recursive(int start, int number) {
	char* arr[6] = {
		"\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n",
		"���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n",
		"���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n",
		"____\"����Լ��� ������?\"\n",
		"____��� �亯�Ͽ���.\n",
		"____\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n"
	};
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j < start; j++) printf("____");
		printf(arr[i]);
	}
	if (start != number) {
		recursive(start + 1, number);
	}
	else {
		for (int i = 1; i < start; i++)printf("____");
		printf(arr[5]);
	}
	for (int i = 1; i < start; i++)printf("____");
	printf(arr[4]);
}

int main(void) {
	int number;
	scanf("%d", &number);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	printf("\"����Լ��� ������?\"\n");
	recursive(1, number);
	printf("��� �亯�Ͽ���.\n");
}