#include <stdio.h>
int main() {
	int a, b, c;
	char d[100] = "";
	scanf("%d %d %d", &a, &b, &c);
	sprintf(d, "%d", a*b*c);

	int f[] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < strlen(d); i++) {

		for (int k = 0; k < 10; k++) {
			char temp = (char)(k + '0');
			if (temp == d[i]) {
				f[k] += 1;
			}
		}

	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", f[i]);
	}
}
