import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int count = sc.nextInt();
		for (int i =0; i< count; i++) {
			int sum = 0;
			int score = 0;
			String Temp = sc.next();
			for (int j=0; j<Temp.length();j ++) {
				if( j!= 0 && Temp.charAt(j-1) == 'O' && Temp.charAt(j) == 'O' ) {
					score ++;
					sum += score ;
				}
				else if(Temp.charAt(j) == 'O') {
					score = 1;
					sum += score;
				}
				else {
					score =0;
				}

			}
			System.out.println(sum);
		}

	}
}
