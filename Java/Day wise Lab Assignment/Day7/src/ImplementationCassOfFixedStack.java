import java.util.Arrays;

public class ImplementationCassOfFixedStack extends Customer implements FixedStack{

	Customer cust[] = new Customer[STACK_SIZE];
	static int top;
	static {
		top = -1;
	}
	@Override
	public void push(Customer c) {
		System.out.println("In push");
		if (top < STACK_SIZE) {
			cust[++top] = c;
		} else {
			System.out.println("Stack Full!");
		}
	}

	@Override
	public int pop() {
		if (top > -1) {
			cust[top] = null;
			top--;
		} else {
			System.out.println("Underflow!");
		}
		return 0;
	}
	
	void display() {
		System.out.println("In Display");
		for (int i = 0; i < top; i++) {
			System.out.println("The customer details are: "+this.cust[i].toString());
		}
	}

	@Override
	public String toString() {
		return "ID: "+cust[0].getId() + " name: "+this.getName()+" Address: "+this.getAddress();
	}

	
}
