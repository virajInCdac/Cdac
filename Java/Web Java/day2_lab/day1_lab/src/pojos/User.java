package pojos;

import java.sql.Date;

//id | first_name | last_name | email          | password | dob        | status | role

public class User {
	int userId;
	String uFirstName;
	String uLastName;
	String uEmail;
	String uPassword;
	Date uDOB;
	boolean uVStatus;
	String uRole;
	
	public User() {
		// TODO Auto-generated constructor stub
	}

	public User(String uFirstName, String uLastName, String uEmail, String uPassword, Date uDOB) {
		super();
		this.uFirstName = uFirstName;
		this.uLastName = uLastName;
		this.uEmail = uEmail;
		this.uPassword = uPassword;
		this.uDOB = uDOB;
	}

	public int getUserId() {
		return userId;
	}

	public void setUserId(int userId) {
		this.userId = userId;
	}

	public String getuFirstName() {
		return uFirstName;
	}

	public void setuFirstName(String uFirstName) {
		this.uFirstName = uFirstName;
	}

	public String getuLastName() {
		return uLastName;
	}

	public void setuLastName(String uLastName) {
		this.uLastName = uLastName;
	}

	public String getuEmail() {
		return uEmail;
	}

	public void setuEmail(String uEmail) {
		this.uEmail = uEmail;
	}

	public String getuPassword() {
		return uPassword;
	}

	public void setuPassword(String uPassword) {
		this.uPassword = uPassword;
	}

	public Date getuDOB() {
		return uDOB;
	}

	public void setuDOB(Date uDOB) {
		this.uDOB = uDOB;
	}

	public boolean isuVStatus() {
		return uVStatus;
	}

	public void setuVStatus(boolean uVStatus) {
		this.uVStatus = uVStatus;
	}

	public String getuRole() {
		return uRole;
	}

	public void setuRole(String uRole) {
		this.uRole = uRole;
	}

	@Override
	public String toString() {
		return "User [userId=" + userId + ", uFirstName=" + uFirstName + ", uLastName=" + uLastName + ", uEmail="
				+ uEmail + ", uDOB=" + uDOB + ", uVStatus=" + uVStatus + ", uRole=" + uRole + "]";
	}
	
	
	
}
