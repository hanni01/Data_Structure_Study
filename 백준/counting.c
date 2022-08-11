#include <stdio.h>
#include <stdlib.h>
#define max 10000

int main() {
	int num;
	scanf("%d", &num);
	int inputArr[max];
	for (int i = 0; i < num; i++) {
		inputArr[i] = 0;
	}

	for (int i = 0; i < num; i++) {
		int input;
		scanf("%d", &input);
		inputArr[input]++;
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < inputArr[i]; j++) {
			printf("%d\n", i);
		}
	}
}