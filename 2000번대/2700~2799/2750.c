#include <stdio.h>

int main() {
	int a;
	int input;
	scanf("%d", &a);
	int list[1000];
	for (int i = 0; i < a; i++) {
		scanf("%d", &input);
		list[i] = input;
	}
	int tmp;
	for (int i = 0; i < a; i++) {
		for (int j = i; j < a; j++) {
			if (list[i] > list[j]) {
				tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
			}
		}
	}
	for (int i = 0; i < a; i++) {
		printf("%d\n", list[i]);
	}

}
