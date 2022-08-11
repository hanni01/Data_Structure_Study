#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	int tmp;

	scanf("%d", &size);
	int* numArr = (int*)malloc(sizeof(int)*size);

	for (int i = 0; i < size; i++) {
		scanf("%d", &numArr[i]);
	}

	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			if (numArr[i] > numArr[j]) {
				tmp = numArr[i];
				numArr[i] = numArr[j];
				numArr[j] = tmp;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		printf("%d\n", numArr[i]);
	}
}