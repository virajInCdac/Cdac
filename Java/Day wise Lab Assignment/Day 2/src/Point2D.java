/*Create a  class Point2D   for representing a point in x-y co-ordinate system.

4.1 Create a parameterized constructor to accept x & y co-ords.

4.2 Add  show() method  --to return point's x & y co-ords
eg : public String show() {.....}

4.3 (Optional work)
Add a non static  , isEqual method to Point2D class : boolean returning method : must return true if both points are having same x,y co-ords or false otherwise.*/

import java.util.Scanner;

class Point2D{
	/*
	private static int x;
	private static int y;
	Point2D(int x, int y){
		this.x = x;
		this.y = y;
	}
	
	public static int[] show() {
		return new int[] {x,y};
	}
	
	public static void main (String[] args){
		Point2D pts = new Point2D(2,4);
		int result[] = show();
		System.out.println(result[0] +" "+result[1]);
	} */
	private double x;
	private double y;
	Point2D(double x, double y){
		this.x = x;
		this.y = y;
	}
	public String show() {
		return (x+" & "+y+" are the co-ordinates");
	}
	public boolean isEqual(Point2D second){
		if (x == second.x && y == second.y){
			return true;
		}
		return false;
	}
	public double calculateDistance (Point2D pts){
		double x = pts.x - this.x;
		x = x * x;
		double y = pts.y - this.y;
		y = y * y;
		double r = Math.sqrt(x+y);  
		return r;
	}
	//To run this replace the below line with public static void main (String[] args)
	// removed for the tester class
	public static void main (){
		Point2D pts = new Point2D(3,4);
		Point2D pts2 = new Point2D(1,7);
		String result = pts.show();
		if(pts.isEqual(pts2)){
			System.out.println("Matched :)");
		} else{
			System.out.println("Did not Match :(");
		}
		System.out.println("Points are "+result);
		System.out.println("Distance is "+pts.calculateDistance(pts2));
	}
}