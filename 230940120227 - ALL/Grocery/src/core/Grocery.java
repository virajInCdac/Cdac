package core;

import static java.time.LocalDate.now;

import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.Period;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;

import CustomException.GroceryException;

public class Grocery {
	String Name;
	double PricePerUnit;
	double Quantity;
	LocalDate LastUpdated;
	
	public String getName() {
		return Name;
	}
	public double getPricePerUnit() {
		return PricePerUnit;
	}
	public double getQuantity() {
		return Quantity;
	}
	public LocalDate getLastUpdated() {
		return LastUpdated;
	}
	public Grocery(String name, double pricePerUnit, double quantity) {
		super();
		Name = name;
		PricePerUnit = pricePerUnit;
		Quantity = quantity;
		LastUpdated = /*LocalDate.parse("2014-09-12")*/now(); //Used LocalDate.parse("2014-09-12") for testing 
	}
	@Override
	public String toString() {
		return "Grocery [Name=" + Name + ", PricePerUnit=" + PricePerUnit + ", Quantity=" + Quantity + ", LastUpdated="
				+ LastUpdated + "]";
	}
	public static Grocery validateAllInputs(String name2, double pricePerUnit2, double quantity2, List<Grocery> groceryList) throws GroceryException {
		// TODO Auto-generated method stub
		alreadyExists(name2, groceryList);
		Negitive(pricePerUnit2);
		Negitive(quantity2);
		return new Grocery(name2, pricePerUnit2, quantity2);
	}
	private static void Negitive(double pricePerUnit2) throws GroceryException {
		// TODO Auto-generated method stub
		if (pricePerUnit2 < 0) {
			throw new GroceryException("Negitive Value Entered");
		}
	}
	private static void alreadyExists(String name2, List<Grocery> groceryList) throws GroceryException {
		// TODO Auto-generated method stub
		Grocery g = new Grocery(name2);
		if (groceryList.contains(g)) {
			throw new GroceryException("Grocery Already Present!!!");
		}
	}
	@Override
	public boolean equals(Object obj) {
		// TODO Auto-generated method stub
		if (obj instanceof Grocery) {
			String otherName = ((Grocery) obj).getName();
			if (this.Name.toUpperCase().equals(otherName.toUpperCase())) {
				return true;
			}
		}
		return false;
	}
	public Grocery(String name) {
		super();
		Name = name;
	}
	public static void updateQuantity(String name2, double quantity2, List<Grocery> groceryList) throws GroceryException {
		// TODO Auto-generated method stub
		Negitive(quantity2);
		Grocery g = new Grocery(name2);
		if (!groceryList.contains(g)) {
			throw new GroceryException("Grocery not found!");
		} else {
			int index = groceryList.indexOf(g);
			if (index != -1) {
				g = groceryList.get(index);
				g.setQuantity(quantity2);
				System.out.println("Quantity updated to "+quantity2);
			}
		}
	}
	public void setQuantity(double quantity) {
		Quantity = quantity;
	}
	public static void removeAllEmpty(List<Grocery> groceryList) {
		// TODO Auto-generated method stub
		List<Integer> toRemove = new ArrayList<Integer>();
		for (Grocery g : groceryList) {
			if (g.Quantity == 0) {
				toRemove.add(groceryList.indexOf(g)) ;
			}
		}
		for (Integer i : toRemove) {
			//System.out.println(i);
			groceryList.remove(groceryList.get(i));
		}
	}
	public static void displayLastUpdated3DaysAgo(List<Grocery> groceryList) {
		// TODO Auto-generated method stub
		for (Grocery g : groceryList) {
			Period p = Period.between(g.LastUpdated, now());
			if (p.getDays() <= 3) {
				System.out.println(g);
			}
		}
	}

}
