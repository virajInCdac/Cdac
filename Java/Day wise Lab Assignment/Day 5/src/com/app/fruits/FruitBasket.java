package com.app.fruits;

import java.util.Arrays;
import java.util.Scanner;
import com.app.fruits.*;

public class FruitBasket {
	public static void main(String[] args) {
		int noOfItemsInBasketAdded = 0;
		System.out.println("Enter the size of Basket!");
		Scanner sc = new Scanner(System.in);
		Fruit[] fruitBasket = new Fruit[sc.nextInt()];
		//Initializing the fruit array of references so that we don't receive Exception in thread "main" java.lang.NullPointerException
		//at com.app.fruits.FruitBasket.main(FruitBasket.java:12)
//		for (int i = 0; i < fruitBasket.length; i++){
//			fruitBasket[i] = new Mango("",0,"",true );
//		}
		//The above code was not required Scanner sc = new Scanner(System.in); new keyword was missing
		
		int choice;
		System.out.println("Ok Basket is created");
		
		for (int i = 0; i < fruitBasket.length; i++) {
			if (noOfItemsInBasketAdded < fruitBasket.length) {
				noOfItemsInBasketAdded++;
				System.out.println("Enter\n1. Add Mango\n2. Add Orange\n3. Add Apple");
				choice = sc.nextInt();
				switch (choice) {
				case 1:
					System.out.println("Enter the name of the mango. eg: hafus, langda");
					String name = sc.next();
					System.out.println("Enter the quantity.");
					double qty = sc.nextDouble();
					System.out.println("Which color mango you want?.");
					String color = sc.next();
					fruitBasket[i] = new Mango(color,qty,name,true );
					break;
				case 2:
					System.out.println("Enter the name of the Orange eg: Narangi");
					name = sc.next();
					System.out.println("Enter the quantity.");
					qty = sc.nextDouble();
					System.out.println("Which color Orange you want?.");
					color = sc.next();
					fruitBasket[i] = new Orange(color, qty, name, true);
					break;
				case 3: 
					System.out.println("Enter the name of the Apple eg: Kashmari");
					name = sc.next();
					System.out.println("Enter the quantity.");
					qty = sc.nextDouble();
					System.out.println("Which color Apple you want?.");
					color = sc.next();
					fruitBasket[i] = new Apple (color, qty, name, true);
					break;
				default:
					System.out.println("Incorrect option");
					break;
				}
			} else {
				System.out.println("Basket full");
				System.exit(0);
			}
			
		}
		
		/*
		 * Apple A = new Apple("Red", 56, "Apple", true);
		 * System.out.println("The value of A is "+A);
		 * 
		 * 
		 * Fruit B = new Mango("Yellow", 110, "Aam", false);
		 * System.out.println(B.toString()); System.out.println(B.taste());
		 * 
		 * ((Mango)B).pulp(); Fruit O = new Orange("Orange", 50, "Nagpuri", true);
		 * ((Orange)O).juice(); A.jam();
		 */
		for (Fruit f: fruitBasket) {
			if (f instanceof Apple)
				 System.out.println(f.getName());//((Apple)f).getName();
			else if (f instanceof Mango)
				System.out.println(f.getName());//((Mango)f).getName();
			else if (f instanceof Orange)
				System.out.println(f.getName());//((Orange)f).getName();
			
		}

		
		//5. Display name,color,weight , taste of all fresh fruits , in the basket.
		for (Fruit f: fruitBasket) {
//			if (f instanceof Apple)
//				 System.out.println(((Apple)f)+ " and I am "+(((Apple)f).is_fresh()?"Fresh":"Not Frsh"));//((Apple)f).getName();
//			else if (f instanceof Mango)
//				System.out.println(((Mango)f)+ " and I am "+ (f.is_fresh()?"Fresh": "Not Fresh"));//((Mango)f).getName();
//			else if (f instanceof Orange)
//				System.out.println(f+ " and I am "+ (f.is_fresh()?"Fresh": "Not Fresh"));//Will call 
			if (f instanceof Apple || f instanceof Orange)
				f.set_fresh();
			System.out.println(f+ " and I am "+(f.is_fresh()?"Fresh":"Not Frsh"));//((Apple)f).getName();
		}	
		
		//6. Mark a fruit in a basket , as stale(=not fresh)
		System.out.println("Enter a index at which the fruit is not frsh.");
		int index = sc.nextInt();
		if (index >=  1 || index < noOfItemsInBasketAdded )
			fruitBasket[index-1].set_fresh();
		
		else
			System.out.println("Invalid Index");
		
		for (Fruit f: fruitBasket) {
//			if (f instanceof Apple)
//				 System.out.println(((Apple)f)+ " and I am "+(((Apple)f).is_fresh()?"Fresh":"Not Frsh"));//((Apple)f).getName();
//			else if (f instanceof Mango)
//				System.out.println(((Mango)f)+ " and I am "+ (f.is_fresh()?"Fresh": "Not Fresh"));//((Mango)f).getName();
//			else if (f instanceof Orange)
//				System.out.println(f+ " and I am "+ (f.is_fresh()?"Fresh": "Not Fresh"));//Will call 
//			if (f instanceof Apple || f instanceof Orange)
//				f.set_fresh();
			System.out.println(f+ " and I am "+(f.is_fresh()?"Fresh":"Not Frsh"));//((Apple)f).getName();
		}	
		
		for (Fruit f: fruitBasket) {
			f.equals(fruitBasket);
		}

}
		
//	private static Scanner Scanner(InputStream in) {
//		// TODO Auto-generated method stub
//		return null;
//	}
}