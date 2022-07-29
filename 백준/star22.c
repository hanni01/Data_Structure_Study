#include <stdio.h>
#define printf()\
printf("***\n");\
printf("* *\n");\
printf("***\n");
				
void star(int n) {
	for (int i = 0; i < n / 3; i++) {
		for (int j = 0; j < n / 3; j++) {
			printf()
		}
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	star(n);
}