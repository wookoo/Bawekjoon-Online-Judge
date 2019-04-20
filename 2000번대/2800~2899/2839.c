#include <stdio.h>
int main() {
	int input;
	scanf("%d", &input);
	int three = 0;
	while (1) {
		if (input % 5 == 0) {
			printf("%d", input / 5 + three);
			break;
		}
		else if (input <= 0) {
			printf("-1");
			break;
		}
		else {
			input -= 3;
			three++;
		}
	}
}
