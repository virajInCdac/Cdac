import java.util.Scanner;

public class Tester {
	public static void main(String[] args) {	
		// TODO Auto-generated method stub
		int choice;
		System.out.println("Enter\n1: FixedStack\n2: Growable Stack");
		try(Scanner sc = new Scanner(System.in)){
			choice = sc.nextInt();
		}
		switch (choice) {
		case 1:
			ImplementationCassOfFixedStack f = new ImplementationCassOfFixedStack();
			f.push(new Customer(1,"Vishal", "Udaipur"));
			f.display();
			System.out.println(f);
			break;
		case 2 :
			System.out.println("");
			break;
		default:
			break;
		}
	}
}
