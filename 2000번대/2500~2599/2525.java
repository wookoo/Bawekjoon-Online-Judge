import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner  sc = new Scanner(System.in);
		int h = sc.nextInt();
		int m = sc.nextInt();
		int mins = sc.nextInt();
		h = (int)((mins+m)/60 + h);
		m = mins + m;
		if (m>=60) {
			m -= 60* (int)(m/60);
		}
		System.out.println(h%24+" " +m);
	}
}
