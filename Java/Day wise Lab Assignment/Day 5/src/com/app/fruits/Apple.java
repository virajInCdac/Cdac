package com.app.fruits;

public class Apple extends Fruit{
	
	public Apple (String color, double weight, String name, boolean fresh) {
		super(color,weight,name,fresh);
		
	}
	@Override
	public String toString() {
		return super.toString();
	}
	
	@Override
	public String taste() {
		return "sweet n sour";
	}
	//public void jam() {Display name of the fruit + a mesg  making jam!}
	public void jam() {
		System.out.println("Name "+super.getName()+" "+"making jam!");
	}
	
	public boolean is_fresh() {
		return super.is_fresh();
	}
}
