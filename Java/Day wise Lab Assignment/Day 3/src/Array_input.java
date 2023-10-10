//Accept no of data samples(of type double) from User(using scanner)
//Create suitable array & display it using for-loop , to confirm default values.
import static java.lang.System.*;
import java.util.Scanner;


class Array_input{
	public static void main(String[] args){
		double samples[] = new double[3];
		Scanner scanner = new Scanner(System.in);
		for (int i = 0; i < samples.length; i++){
			out.println("Enter the "+i+" element");
			samples[i] = scanner.nextDouble();
		}
		for (double d: samples){
			out.println("The value is: "+d);
		}
	}
}