#include <stdio.h>
int main() {
	char a[4];
	char b[4];
	scanf("%s %s", &a, &b);
	char tempA[4] = { a[2],a[1],a[0],NULL };
	char tempB[4] = { b[2],b[1],b[0],NULL };
	int A = atoi(tempA);
	int B = atoi(tempB);
	int Max = A > B ? A : B;
	printf("%d", Max);
}
