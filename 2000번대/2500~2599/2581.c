#include <stdio.h>
int Primary(N);

int main() {
	int M, N;
	int C = 0, SUM = 0;

	scanf("%d %d", &M, &N);
	int list[10000] = { 0 };
	for (int i = M; i <= N; i++) {
		int D = Primary(i);
		if (D != 0 && i > 1) {
			//printf("%d\n", i);
			list[C] = i;
			C++;
		}
	}
	for (int i = 0; i < C; i++) {
		SUM += list[i];
	}

	if (C == 0) {
		printf("-1");
	}
	if (SUM != 0) {
		printf("%d\n", SUM);
		printf("%d", list[0]);
	}


}

int Primary(int N) {
	for (int i = 2; i <= N; i++) {
		if (N == 1) {
			return 0;
			break;
		}
		if (i == N) {
			return N;
			break;

		}
		if (N == 2) {
			return N;
			break;

		}
		if (N % i == 0) {
			return 0;
			break;


		}

	}

}
