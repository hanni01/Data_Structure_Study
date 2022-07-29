#include <stdio.h>
//Á¤´äÁö

void star(int x, int y, int n) {
	if ((x / n) % 3 == 1 && (y / n) % 3 == 1) {
		printf(" ");
	}
	else {
		if (n / 3 != 0) {
			star(x, y, n / 3);
		}
		else {
			printf("*");
		}
	}
}

int main(void) {
	int number;
	scanf("%d", &number);
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < number; j++) {
			star(i, j, number);
		}
		printf("\n");
	}
}