#include <stdio.h>
#include <math.h>

void hanoi(int n, int start, int middle, int last);

int main(void) {
	int number;
	scanf("%d", &number);
	int total = pow(2, number) - 1;
	printf("%d\n", total);
	hanoi(number, 1, 2, 3);
}

void hanoi(int n, int start, int middle, int arrive) {
	if (n == 1) {
		printf("%d %d\n", start, arrive);
	}
	else {
		hanoi(n - 1, start, arrive, middle);
		hanoi(1, start, middle, arrive);
		hanoi(n - 1, middle, start, arrive);
	}
}