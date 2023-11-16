package tester;

import java.util.Scanner;

import core.Array;
import utils.*;

public class Tester {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Array a = new Array(ArrayUtils.arrayCreate());

		boolean exit = false;

		while (!exit)

		{
			System.out.println("Menu:");
			System.out.println("1. Display the array\n2. Reverse the array"
					+ "\n3. Replace the nth element from the array and print\n4. Find the addition of all elements of the array"
					+ "\n5. Find the maximum number from the array\n6. Print the average of all the elements from the array"
					+ "\n7. Display the even and odd number from the array separately");

			System.out.println("Enter your choice: ");
			int choice = sc.nextInt();
			switch (choice) {
			case 1:
				ArrayUtils.displayArray(a.getArray());
				break;
			case 2:
				ArrayUtils.reverseArray(a.getArray());
				ArrayUtils.displayArray(a.getArray());
				break;
			case 3:
				System.out.println("Enter the index of the element to be replaced: ");
				int index = sc.nextInt();
				System.out.println("Enter the new element: ");
				int newValue = sc.nextInt();
				ArrayUtils.replaceElement(a.getArray(), (index - 1), newValue);
				ArrayUtils.displayArray(a.getArray());
				break;
			case 4:
				int sum = ArrayUtils.findSum(a.getArray());
				System.out.println("The sum of all elements of the array is: " + sum);
				break;
			case 5:
				int max = ArrayUtils.findMax(a.getArray());
				System.out.println("The maximum element in the array is: " + max);
				break;
			case 6:
				float average = ArrayUtils.findAverage(a.getArray());
				System.out.println("The average of all elements of the array is: " + average);
				break;
			case 7:
				ArrayUtils.displayEvenOddNumbers(a.getArray());
				break;
			case 0:
				exit = true;
			}
		}
		sc.close();
	}

}
