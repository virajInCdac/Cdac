/*2 Accept 2 double values from User (using Scanner). Check data type.
. If arguments are not doubles , supply suitable error message & terminate.
If numbers are double values , print its average.
Hint : Method of Scanner to use : hasNextDouble , nextDouble */
import java.util.Scanner;

class IsDouble{
	public static void main (String[] input){
		double d1, d2;
		System.out.println("Enter the Numbers");
		Scanner scanner = new Scanner(System.in);
		//Here we care expecting to enter two double value with a space in b/w Ex: 14.5 18.9
// and hence two variables
		if (scanner.hasNextDouble()){
			d1 = scanner.nextDouble();
		}
		if (scanner.hasNextDouble()){
			d2 = scanner.nextDouble();
			//System.out.println("first "+d1+" second "+d2);
		}
		if (d1 != Null){
			System.out.println("first "+d1);
		}
		
		//System.out.println("first "+d1+" second ");
	}
}

//hasNextDouble dose not consume the contents of the buffer
//hence nextDouble can use the value stored in buffer  