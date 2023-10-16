
public class ImplementationOfGrowableStack implements GrowableStack {
	public Customer cust[] = new Customer[2];
	static int top, num;
	static {
		num = 2;
		top = -1;
	}

	@Override
	public void pushG(Customer c) {
		if (top < cust.length - 1) {
			cust[++top] = c;
			System.out.println("First top = "+top);
		} else {
			Customer[] badaCust = new Customer[cust.length * 2]; 
			for (int i = 0; i < cust.length; i++) {
				badaCust[i] = cust[i];
			}
			cust = badaCust;
			cust[++top] = c;
			System.out.println("Bada top = "+top);
		}
		//display();
	}

	@Override
	public int popG() {
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
		for (int i = 0; i <= top ; i++) {
			System.out.println("The customer details are: " + cust[i]);
		}
	}

}
