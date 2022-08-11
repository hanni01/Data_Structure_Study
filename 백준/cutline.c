#include <stdio.h>
#include <stdlib.h>

int main() {
	int people, winner;
	scanf("%d %d", &people, &winner);
	int *score = (int*)malloc(sizeof(int)*people);
	for (int i = 0; i < people; i++) {
		scanf("%d", &score[i]);
	}

	int tmp;
	for (int i = 0; i < people; i++) {
		for (int j = i+1; j < people; j++) {
			if (score[i] > score[j]) {
				tmp = score[i];
				score[i] = score[j];
				score[j] = tmp;
			}
		}
	}
	
	printf("%d", score[people - winner]);
	
}