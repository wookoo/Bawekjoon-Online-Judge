import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int[] list = new int[1000];
		for (int i = 0; i< a; i++) {
			list[i] = sc.nextInt();
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
		for (int i =0; i <a; i++) {
			System.out.println(list[i]);
		}
	}
}
