#include <stdio.h>
//3번째 시도

void star(int n, int x, int y);

int main(void) {
	int number;
	scanf("%d", &number);
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < number; j++) {
			star(number, i, j);
		}
		printf("\n");
	}
}

void star(int n, int x, int y) {
	if ((x/n) % 3 == 1 && (y/n) % 3 == 1) {
		printf(" ");
	}
	else {
		if (n / 3 == 0) {
			printf("*");
		}
		else {
			star(n / 3, x, y);
		}
	}
}