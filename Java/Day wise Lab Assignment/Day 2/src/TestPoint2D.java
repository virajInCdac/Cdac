class TestPoint2D{
	public static void main(String[] args){
		
		Point2D t1 = new Point2D(5,6);
		Point2D t2 = new Point2D(5,6);
		if(t1.isEqual(t2)){
			System.out.println("Equal tested");
		} else{
			System.out.println("Not equal tested");
		}
	}
}