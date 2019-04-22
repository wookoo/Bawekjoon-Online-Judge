#include <stdio.h>
int main() {
	int count;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		int loop;
		char needChange[100];
		scanf("%d %s", &loop, needChange);
		for (int k = 0; k < strlen(needChange); k++) {
			for (int j = 0; j < loop; j++) {
				printf("%c", needChange[k]);
			}
		}
		printf("\n");
	}
}
