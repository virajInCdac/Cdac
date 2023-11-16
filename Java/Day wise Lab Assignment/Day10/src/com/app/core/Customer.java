package com.app.core;

import java.time.LocalDate;

public class Customer {
//	Identify the core classes/enums involved
//	1. Customer class (core class)
//	state  : customer id(int) ,first name, last name (string),email(string),password(string),registrationAmount(double),dob(LocalDate),plan(ServicePlan : enum)
//	idGenerator : static 
//	Must generate customer ids automatically : auto increment)
//	PK(UID) : email
//
//	ctors 
//	1. all args ctor
//	2. PK based ctor

	private String firstName;
	private String lastName;
	private String email;
	private String password;
	private double registrationAmount;
	private LocalDate dob;
	private ServicePlan plan;
	private static int id;

	public Customer(String firstName, String lastName, String email, String password, double registrationAmount,
			LocalDate dob, ServicePlan plan) {
		super();
		this.firstName = firstName;
		this.lastName = lastName;
		this.email = email;
		this.password = password;
		this.registrationAmount = registrationAmount;
		this.dob = dob;
		this.plan = plan;
	}

	@Override
	public String toString() {
		return "Customer [firstName=" + firstName + ", lastName=" + lastName + ", email=" + email
				+ ", registrationAmount=" + registrationAmount + ", dob=" + dob + ", plan=" + plan + "]";
	}

}
