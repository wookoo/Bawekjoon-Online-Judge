#include <stdio.h>
int main() {
	int input;
	scanf("%d", &input);
	int sum = 0;
	for (int i = 0; i <= input; i++) {
		sum += i;
	}
	printf("%d", sum);
}
