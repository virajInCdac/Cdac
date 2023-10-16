import java.util.Scanner;

public class Tester {
	public static void main(String[] args) {
		int choice, choice1;
		boolean exit = false;
		System.out.println("Enter\n1: FixedStack\n2: Growable Stack");
		try (Scanner sc = new Scanner(System.in)) {
			choice = sc.nextInt();
			switch (choice) {
			case 1:
				ImplementationCassOfFixedStack f = new ImplementationCassOfFixedStack();
				while (!exit) {
					System.out.println("1: Push\t2: Pop\t3: Display");
					switch (sc.nextInt()) {
					case 1:
						System.out.println("Enter id, followed by Name, followed by Address");
//					Scanner sc = new Scanner(System.in);
//					int i = sc.nextInt();
						f.push(new Customer(sc.nextInt(), sc.next(), sc.next()));
//					sc.close();
						break;
					case 2:
						f.pop();
						break;
					case 3:
						f.display();
						break;
					default:
						exit = true;
						break;
					}	
				}
				
				// Customer c = new Customer(1,"Vishal", "Udaipur");

				// f.display();
				// System.out.println(f.toString()); This will call the toString of
				// ImplementationCassOfFixedStack class
				break;
			case 2:
				ImplementationOfGrowableStack g = new ImplementationOfGrowableStack();
				while (!exit) {
					System.out.println("1: Push\t2: Pop\t3: Display");
					switch (sc.nextInt()) {
					case 1:
						System.out.println("Enter id, followed by Name, followed by Address");
						g.pushG(new Customer(sc.nextInt(), sc.next(), sc.next()));
//					sc.close();
						break;
					case 2:
						g.popG();
						break;
					case 3:
						g.display();
						break;
					default:
						exit = true;
						break;
					}
				}
				System.out.println("Out of Growable stack!!!!");
				break;
			default:
				System.out.println("Invalid Entry!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!:(((((((((((((((((((((((((((((((((((((:((((((((((((((((((((((");
			}
		}
//	public static int getIdFromUser() {
//		try (Scanner s = new Scanner(System.in)){
//			return s.nextInt();
//		}
//	}
	}
}