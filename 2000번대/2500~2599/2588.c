#include <stdio.h>
int main() {
	int a;
	char b[100];
	scanf("%d %s", &a, b);
	printf("%d\n", a*(b[strlen(b) - 1] - '0'));
	printf("%d\n", a*(b[strlen(b) - 2] - '0'));
	printf("%d\n", a*(b[strlen(b) - 3] - '0'));
	printf("%d\n", a*(atoi(b)));
}
