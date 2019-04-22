import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner  sc = new Scanner(System.in);
		int count = sc.nextInt();
		for (int i = 0; i< count; i++) {
			int loop = sc.nextInt();
			String needChange = sc.next();
			for (int k =0; k < needChange.length(); k++) {
				for (int j =0; j < loop; j++) {
					System.out.print(needChange.charAt(k));
				}
			}
			System.out.println();
		}
	}
}
