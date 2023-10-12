package com.app.fruits;
//import java.lang.String;

public class Fruit {
	private String color;
	private double weight;
	private String name;
	private boolean fresh;

	public Fruit(String color, double weight, String name, boolean fresh) {
		super();
		this.color = color;
		this.weight = weight;
		this.name = name;
		this.fresh = fresh;
	}

	@Override
	public String toString() {

		return "name is " + name + " color is " + color + " my weight is " + weight;
	}

	public String getColor() {
		return color;
	}

	public double getWeight() {
		return weight;
	}

	public String getName() {
		return name;
	}
	public String taste() {
		return "No Specific taste";
	}
	
	public boolean is_fresh() {
		return fresh;
	}
	
	public void set_fresh() {
		fresh = false;
	}
	
//	@Override
//	public boolean equals(Object obj) {
//		return true;
//	}
	
	@Override
	public boolean equals(Object obj) {
		if (this.getClass().getName() == "Orange") {
			
		}
		return true;
	}

}
