#include <stdio.h>
int main() {
	int count;
	scanf("%d", &count);
	char Temp[100];
	for (int i = 0; i < count; i++) {
		int sum = 0;
		int score = 0;
		scanf("%s", Temp);
		for (int j = 0; j < strlen(Temp); j++) {
			if (j != 0 && Temp[j-1]== 'O' && Temp[j] == 'O') {
				score++;
				sum += score;
			}
			else if (Temp[j] == 'O') {
				score = 1;
				sum += score;
			}
			else {
				score = 0;
			}

		}
		printf("%d\n",sum);
	}
}
