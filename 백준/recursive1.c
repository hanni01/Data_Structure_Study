#include <stdio.h>

int result = 0;

int recursive(int n) {
	if (n > 0) {
		return n * recursive(n - 1);
	}
	else {
		return 1;
	}
}

int main(void) {
	int number;
	scanf("%d", &number);
	printf("%d\n", recursive(number));
}