import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner  sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		String d = Integer.toString(a*b*c);
		int[] f = {0,0,0,0,0,0,0,0,0,0};
		for (int i = 0; i < d.length(); i++) {

			for (int k = 0; k <10; k++) {
				char temp = (char) (k+'0');
				if(temp ==d.charAt(i)) {
					f[k] += 1;
				}
			}
		}
		for (int i : f) {
			System.out.println(i);
		}
	}
}
