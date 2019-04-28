
import java.util.Scanner;

class Stack{
	int[] array = new int[100000];
	int tops = -1;

	public void push(int n) {
		this.tops += 1;
		this.array[this.tops] = n;
	}

	public int top() {
		if(this.empty()==1) {
			return -1;
		}
		return this.array[this.tops];
	}
	public int size() {
		return this.tops +1;
	}
	public int empty() {
		if (this.tops == -1) {
			return 1;
		}
		return 0;
	}
	public int pop() {
		if (this.empty() == 1) {
			return -1;
		}
		return this.array[this.tops--];
	}
}



public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int times = sc.nextInt();
		Stack stack = new Stack();
		for(int i =0; i < times; i++) {
			String temp = sc.next();
			if(temp.equals("pop")) {
				System.out.println(stack.pop());
			}
			else if (temp.equals("push")) {
				int temps = sc.nextInt();
				stack.push(temps);
			}
			else if (temp.equals("size")) {
				System.out.println(stack.size());
			}
			else if (temp.equals("empty")) {
				System.out.println(stack.empty());
			}
			else {
				System.out.println(stack.top());
			}
		}
	}
}
