import java.util.Scanner;

class TestPoint2D{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter 2 co-ordinates i.e. X1, X2 & Y1, Y2");
		double firstX, secondX, firstY, secondY;
		//Accepting co-ordinates
		firstX = scanner.nextDouble();
		secondX = scanner.nextDouble();
		firstY = scanner.nextDouble();
		secondY = scanner.nextDouble();
		
		Point2D t1 = new Point2D(firstX, firstY);
		Point2D t2 = new Point2D(secondX, secondY);
		System.out.println(t1.show());
		System.out.println(t2.show());
		if(t1.isEqual(t2)){
			System.out.println("Equal tested");
		} else{
			System.out.println("Not equal tested");
			System.out.println("Distance is "+t1.calculateDistance(t2));
		}
	}
}