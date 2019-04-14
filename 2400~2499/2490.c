#include <stdio.h>
int main() {
	char list[3] = { 'A' };

	for (int k = 0; k < 3; k++) {



		int result[4] = { 0 };
		int zerocount = 0;

		for (int i = 0; i < 4; i++) {
			scanf("%d", &result[i]);
			if (result[i] == 0) {
				zerocount++;
			}
		}


		switch (zerocount) {
		case 0:
			list[k] = 'E';
			break;
		case 1:
			list[k] = 'A';
			break;
		case 2:
			list[k] = 'B';
			break;
		case 3:
			list[k] = 'C';
			break;
		case 4:
			list[k] = 'D';
			break;
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%c\n", list[i]);
	}
}
