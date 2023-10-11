package com.app.fruits;

public class Orange extends Fruit {
	public Orange (String color, double weight, String name, boolean fresh) {
		super(color,weight,name,fresh);
		System.out.println();

}
	@Override
	public String toString() {
		return super.toString();
	}
	
	@Override
	public String taste() {
		return "sour";
	}
	//{Display name n weight of the fruit + a mesg extracting juice!}
	public void juice() {
		System.out.println("Name is "+super.getName()+" Weight is "+super.getWeight()+" extracting juice!");
	}
}