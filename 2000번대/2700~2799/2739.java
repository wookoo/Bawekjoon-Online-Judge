import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int a= new Scanner(System.in).nextInt();
		for(int i = 1; i < 10; i++) {
			System.out.println(a+" * "+i+" = "+i*a);
		}
	}
}
