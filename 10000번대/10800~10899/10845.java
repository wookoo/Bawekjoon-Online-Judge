import java.util.Scanner;

class Queue{
	int last = 0;
	int[] array = new int[100000];
	int index = -1;
	public void push(int n) {
		this.array[this.last++] = n;
	}
	public int getSize() {
		return this.last - (this.index + 1);
	}

	public int empty() {
		if (this.last == this.index + 1) {
			return 1;
		}
		return 0;
	}
	public int pop() {
		if (this.empty()==1) {
			return -1;
		}
		return this.array[this.index++];
	}

	public int front() {
		if(this.empty()==1) {
			return -1;
		}
		return this.array[this.index+1];
	}
	public int back() {
		if(this.empty()==1) {
			return -1;
		}
		return this.array[this.last-1];
	}

}


public class Main {

	public static void main(String[] args) {
		Scanner  sc = new Scanner(System.in);
		Queue q = new Queue();
		int times = sc.nextInt();
		for(int i =0; i < times; i++) {
			String temp = sc.next();
			if(temp.equals("pop")) {
				System.out.println(q.pop());
			}
			else if (temp.equals("push")) {
				int temps = sc.nextInt();
				q.push(temps);
			}
			else if (temp.equals("size")) {
				System.out.println(q.getSize());
			}
			else if (temp.equals("empty")) {
				System.out.println(q.empty());
			}
			else if(temp.equals("front")){
				System.out.println(q.front());
			}
			else {
				System.out.println(q.back());
			}
		}


	}
}
