package com.app.fruits;

import java.io.InputStream;
import java.util.Arrays;
import java.util.Scanner;
import com.app.fruits.*;

public class FruitBasket {
	public static void main(String[] args) {
		System.out.println("Enter the size of Basket!");
		Scanner sc = Scanner(System.in);
		Fruit[] fruitBasket = new Fruit[sc.nextInt()];
		System.out.println("Ok Basket is created\nEnter1. Add Mango\n2. Add Orange\n3. Add Apple");
		int choice = sc.nextInt();
		
		switch (choice) {
		case 1:
			System.out.println("Enter the name of the mango. eg: hafus, langda");
			String name = sc.next();
			System.out.println("Enter the quantity.");
			double qty = sc.nextDouble();
			System.out.println("Which color mango you want?.");
			String color = sc.next();
			Mango m = new Mango(color,qty,name,true );
			break;
		case 2:
			System.out.println("Enter the name of the Orange eg: Narangi");
			name = sc.next();
			System.out.println("Enter the quantity.");
			qty = sc.nextDouble();
			System.out.println("Which color Orange you want?.");
			color = sc.next();
			Orange O = new Orange(color, qty, name, true);
			break;
		case 3: 
			System.out.println("Enter the name of the Apple eg: Kashmari");
			name = sc.next();
			System.out.println("Enter the quantity.");
			qty = sc.nextDouble();
			System.out.println("Which color Apple you want?.");
			color = sc.next();
			break;
		default:
			System.out.println("Incorrect option");
			break;
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
		
		
}

	private static Scanner Scanner(InputStream in) {
		// TODO Auto-generated method stub
		return null;
	}
}