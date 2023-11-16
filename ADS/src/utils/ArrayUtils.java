package utils;

import java.util.Scanner;

public class ArrayUtils {
	static Scanner sc = new Scanner(System.in);

	public static int[] arrayCreate() {
		System.out.println("Enter the size of the array: ");
		int size = sc.nextInt();
		int[] arr = new int[size];
		System.out.println("Enter the elements of the array: ");
		for (int i = 0; i < size; i++) {
			arr[i] = sc.nextInt();
		}
		return arr;
	}
	

	public static void displayArray(int[] arr) {
		System.out.println("The array is: ");
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
		}
		System.out.println();
	}

	public static void reverseArray(int[] arr)

	{
		int start = 0, end = arr.length - 1;
		while (start < end) {
			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
			start++;
			end--;
		}
	}

	public static void replaceElement(int[] arr, int index, int newValue) {
		arr[index] = newValue;
	}

	public static int findSum(int[] arr) {
		int sum = 0;
		for (int i = 0; i < arr.length; i++) {
			sum += arr[i];
		}
		return sum;
	}

	public static int findMax(int[] arr) {
		int max = arr[0];
		for (int i = 1; i < arr.length; i++) {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
		return max;
	}

	public static float findAverage(int[] arr) {
		int sum = findSum(arr);
		float average = (float) sum / arr.length;
		return average;
	}

	public static void displayEvenOddNumbers(int[] arr) {
		System.out.println("Even numbers: ");
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] % 2 == 0) {
				System.out.print(arr[i] + " ");
			}
		}
		System.out.println();

		System.out.println("Odd numbers: ");
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] % 2 != 0) {
				System.out.print(arr[i] + " ");
			}
		}
		System.out.println();
	}

}
