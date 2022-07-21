#include <stdio.h>

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
	if ((x % 3 == 1 && y % 3 == 1) || (x / n == 1 && y / n == 1)) {
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