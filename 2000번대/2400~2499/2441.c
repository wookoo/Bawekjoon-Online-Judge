#include <stdio.h>
int main() {
	int input;
	scanf("%d", &input);
	for (int i = input; i >= 1; i--) {
		for (int j = 1; j <= input - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
