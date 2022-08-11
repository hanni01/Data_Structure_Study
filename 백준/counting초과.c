#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	scanf("%d", &num);

	int *inputArr = (int*)malloc(sizeof(int)*num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &inputArr[i]);
	}

	int max = inputArr[0];
	for (int i = 1; i < num; i++) {
		if (max < inputArr[i]) {
			max = inputArr[i];
		}
	}
	int* countArr = (int*)malloc(sizeof(int)*(max + 1));
	for (int i = 0; i < max + 1; i++) {
		countArr[i] = 0;
	}
	for (int i = 0; i < num; i++) {
		int n = inputArr[i];
		countArr[n]++;
	}

	for (int i = 1; i < max + 1; i++) {
		countArr[i] += countArr[i - 1];
	}

	int *result = (int*)malloc(sizeof(int)*num);
	for (int i = 0; i < num; i++) {
		int input = inputArr[i];
		int count = countArr[input];
		result[count - 1] = input;
		countArr[input]--;
	}
	for (int i = 0; i < num; i++) {
		printf("%d\n", result[i]);
	}
}