public class Fruit {
	private String color;
	private double weight;
	private String name; 
	private boolean fresh;
	
	
	
	public Fruit() {
		super();
	}



	public Fruit(String color, double weight, String name, boolean fresh) {
		super();
		this.color = color;
		this.weight = weight;
		this.name = name;
		this.fresh = fresh;
	}



	@Override
	public String toString() {
		
		return "my name is "+name+" my color is "+color+" my weight is "+weight;
	}
	
	
}
