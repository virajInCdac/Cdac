package tester;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

import com.app.core.Customer;

public class CustomerManagementSystem {

	public static void main(String[] args) {
		System.out.println("Welcome!!!");
		try (Scanner sc = new Scanner (System.in)){
			boolean exit = false;
			Map<String, Customer> customer = new HashMap<>();
			while (!exit) {
				try {
					System.out.println("ENTER \n1. SignUP 2. Signin 3.Change Password 4.Unsubscribe 0.Exit");
					switch (sc.nextInt()) {
					case 1:
						System.out.println("\Enter the following details firstName,  lastName,  email,  password,  dob(yr-mon-day),  plan\"");
						break;

					default:
						break;
					}
					
				}
				
				
			}
			
			
			
			
			
		}

	}

}
