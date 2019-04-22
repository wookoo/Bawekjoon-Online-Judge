import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int count = sc.nextInt();
		int input;
		for (int i = 0; i < count; i++) {
			input = sc.nextInt();
			int[] score = new int[1001];
			int sum = 0;
			double aver = 0.0;
			for (int j = 0; j < input; j++) {
				score[j] = sc.nextInt();
				sum += score[j];
			}
			aver = (double)sum / input;
			int over = 0;
			for (int j = 0; j < input; j++) {
				if (aver < score[j]) {
					over++;
				}
			}
			System.out.println(String.format("%.3f%%", (double)over * 100 / input));

		}
	}
}
