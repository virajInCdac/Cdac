import java.util.Scanner;

public class Tester {
	public static void main(String[] args) {	
		// TODO Auto-generated method stub
		int choice, choice1;
		System.out.println("Enter\n1: FixedStack\n2: Growable Stack");
		try(Scanner sc = new Scanner(System.in)){
			choice = sc.nextInt();
			System.out.println("1: Push\t2: Pop\t3: Display");
			choice1 = sc.nextInt();
		}
		switch (choice) {
		case 1:
			ImplementationCassOfFixedStack f = new ImplementationCassOfFixedStack();
			switch (choice1) {
			case 1:{
				System.out.println("Enter id, followed by Name, followed by Address");
//				Scanner sc = new Scanner(System.in);
//				int i = sc.nextInt();
				f.push(new Customer(1,"Vishal", "Udaipur"));
//				sc.close();
			}
				
				break;
			default:
				break;
			}
			//Customer c = new Customer(1,"Vishal", "Udaipur");
			
			//f.display();
			//System.out.println(f.toString()); This will call the toString of ImplementationCassOfFixedStack class
			break;
		case 2 :
			System.out.println("");
			break;
		default:
			break;
		}
	}
//	public static int getIdFromUser() {
//		try (Scanner s = new Scanner(System.in)){
//			return s.nextInt();
//		}
//	}
}
