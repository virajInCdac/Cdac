/*
4.1 Display food menu to user. User will select items from menu along with the quantity. (eg 1. Dosa 2. Samosa 3. Idli ... 10 . Generate Bill ) Assign fixed prices to food items(hard code the prices)
When user enters 'Generate Bill' option(10) , display total bill & exit.
*/
import java.util.Scanner;

class Hotel{
	public static void main (String[] order){
		System.out.println("Welcome !!!\n1. Dosa --Rs.25 2. Samosa --Rs.15 3. Idli --Rs.30 4. Generate Bill");
		Scanner scanner = new Scanner(System.in);
		int choice = scanner.nextInt();
		//System.out.println("Enter the Quantity for the ordered item");
		int qnt; 
		boolean flag = true;
		int total = 0;
		while(flag){
			switch(choice){
				case 1:
						System.out.println("Enter the Quantity for the Dosa and next choice");
						qnt = scanner.nextInt();
						choice = scanner.nextInt();
						total = total + qnt * 25;
						break;
				case 2:
						System.out.println("Enter the Quantity for the Samosa and next choice");
						qnt = scanner.nextInt();
						choice = scanner.nextInt();
						total = total + qnt * 15;
						break;
				case 3:
						System.out.println("Enter the Quantity for the Idli and next choice");
						qnt = scanner.nextInt();
						choice = scanner.nextInt();
						total = total + qnt * 30;
						break;		
				case 4:
						System.out.println("The bill is for Rs. " + total + " Thanks!");
						flag = false;
						break;
				default:
					System.out.println("1. Dosa --Rs.25 2. Samosa --Rs.15 3. Idli --Rs.30 4. Generate Bill");
					choice = scanner.nextInt();
			}
			//break;
		}
		
		//System.out.println("Your order is : ");
		
	}
}