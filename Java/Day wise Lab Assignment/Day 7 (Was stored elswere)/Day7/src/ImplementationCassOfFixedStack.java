public class ImplementationCassOfFixedStack implements FixedStack {

	public Customer cust[] = new Customer[STACK_SIZE];
	static int top;
	static {
		top = -1;
	}

	@Override
	public void push(Customer c) {
		System.out.println("In push");
		if (top < STACK_SIZE - 1) {
			cust[++top] = c;
		} else {
			System.out.println("Stack Full!");
		}
		display();
		System.out.println("Top is " + top);
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
		for (int i = 0; i <= top; i++) {
			System.out.println("The customer details are: " + cust[i]); // Here cust[i] will call the toString of
																		// Customer class as cust[i] is a reference to
																		// Customer class
		}
	}

//	@Override
//	public String toString() {
//		return "ID: "+cust[0].getId();// + " name: "+super.getName()+" Address: "+this.getAddress();
//	}

}
