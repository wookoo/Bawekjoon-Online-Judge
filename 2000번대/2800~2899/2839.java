import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int input = sc.nextInt();
		int three = 0;
		while (true) {
			if (input % 5 == 0) {
				System.out.println(String.format("%d", input / 5 + three));
				break;
			}
			else if (input <= 0) {
				System.out.println("-1");
				break;
			}
			else {
				input -= 3;
				three++;
			}
		}
	}
}
