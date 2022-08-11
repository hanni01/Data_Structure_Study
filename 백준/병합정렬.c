#include <stdio.h>
#include <stdlib.h>

void sort(int* arr, int left, int right) {
	int middle;
	int tmp;


	if (left < right) {
		middle = (left + right) / 2;

		sort(arr, left, middle);
		sort(arr, middle+1, right);

		//int* sub1 = (int*)malloc(sizeof(int)*(middle-left));
		//for (int i = left; i < middle; i++) {
		//	  sub1[i] = arr[i];
		//}
		//int* sub2 = (int*)malloc(sizeof(int)*(right - middle));
		//for (int i = middle; i < right; i++) {
		//	  sub2[i] = arr[i];
		//}



	}
	else {
		return;
	}
}

int main() {
	int size;
	scanf("%d", &size);
	int* arr = (int*)malloc(sizeof(int)*size);

	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, 0, size - 1);

	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
}