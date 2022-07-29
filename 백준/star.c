#include <stdio.h>
//첫 번째 시도

int n;
int k = 1;
int m = 1;

void star(int start, int number) {
	char mark = '*';
	char blank = ' ';

	if (start != number) {
		star(start * 3, number);
	}
	else {
		for (int i = 1; i < start + 1; i++) {
			if (m == start / 3 + 1) {
				m = 1;
				k++;
			}
			for (int j = 1; j < start + 1; j++) {
				if (i == 3 * k - 1 && j == 3 * m - 1) {
					printf("%c", blank);
					m++;
				}
				else {
					printf("%c", mark);
				}
			}
			printf("\n");
		}
	}
}

int main(void) {
	scanf("%d", &n);
	star(3, n);
}