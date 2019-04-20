#include <stdio.h>
int main() {
	int count;
	scanf("%d", &count);
	int input;
	
	for (int i = 0; i < count; i++) {
		scanf("%d", &input);
		int score[1001];
		int sum = 0;
		double aver = 0.0;
		for (int j = 0; j < input; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		aver = (double)sum / input;
		int over = 0;
		for (int j = 0; j < input; j++) {
			if (aver < score[j]) {
				over++;
			}
		}
		printf("%.3f%%\n", (double)over * 100 / input);
			
	}
}
