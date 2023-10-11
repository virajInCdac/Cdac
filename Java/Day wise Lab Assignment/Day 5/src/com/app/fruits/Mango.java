package com.app.fruits;

public class Mango extends Fruit {
	
	public Mango (String color, double weight, String name, boolean fresh) {
		super(color,weight,name,fresh);
		System.out.println();
	}

	@Override
	public String toString() {
		return super.toString();
	}
	
	@Override
	public String taste() {
		return "sweet";
	}
	//Display name n color of the fruit + a mesg  creating  pulp!
	public void pulp() {
		System.out.println(super.getName()+" "+super.getColor()+" Creating Pulp");
	}
}