import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String a = sc.next();
		String b = sc.next();
		String ConverteA = String.format("%c%c%c", a.charAt(2),a.charAt(1),a.charAt(0));
		String ConverteB = String.format("%c%c%c", b.charAt(2),b.charAt(1),b.charAt(0));
		int c = Integer.parseInt(ConverteA);
		int d = Integer.parseInt(ConverteB);
		System.out.println(c > d ? c : d );
	}
}
