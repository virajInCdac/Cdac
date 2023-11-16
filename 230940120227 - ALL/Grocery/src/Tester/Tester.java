//Remove stock again

package Tester;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import core.Grocery;
import core.PopulateGroceryList;

public class Tester {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		List<Grocery> groceryList = PopulateGroceryList.getGroceryList();
		try(Scanner sc = new Scanner(System.in)){
			while(true) {
				System.out.println("Make a selection\n1: Add new Grocery\n2:Update Quantity\n3: Display Grocery"
						+ "\n4: Remove all empty stock\n5: Display all with changes in Quantity during last 3 days\n\tAny other key to exit");
				try {
					switch (sc.nextInt()) {
					case 1:
						System.out.println("Enter Name of Grocery");
						String name = sc.next();
						System.out.println("Enter Price Per unit");
						double pricePerUnit = sc.nextDouble();
						System.out.println("Enter Quantity in stock");
						double quantity = sc.nextDouble(); 
						Grocery newGrocery = Grocery.validateAllInputs(name, pricePerUnit, quantity, groceryList);
						groceryList.add(newGrocery);
						break;
					case 2:
						System.out.println("Enter the name of the Grocery");
						name = sc.next();
						System.out.println("Enter the Quantity");
						quantity = sc.nextDouble();
						Grocery.updateQuantity(name, quantity, groceryList);
						break;
					case 3:
						groceryList.forEach(i -> System.out.println(i));
						break;
					case 4:
						Grocery.removeAllEmpty(groceryList);
						break;
					case 5:
						Grocery.displayLastUpdated3DaysAgo(groceryList);
						break;
					default:
						System.exit(0);
						break;
					}
				}catch (Exception e) {
					// TODO: handle exception
					System.out.println(e);
					sc.next();
				}
			}
			
		}catch (Exception e) {
			// TODO: handle exception
		}
	}

}
