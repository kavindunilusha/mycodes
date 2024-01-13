package qu01;

import java.util.Scanner;

public class Student {
	
	private String StudentId;
	private String name;
	private String address;
	private String contactNumber;
	
	//overload constructor

	public Student(String studentId, String name, String address, String contactNumber) {
		super();
		this.StudentId = studentId;
		this.name = name;
		this.address = address;
		this.contactNumber = contactNumber;
	}
	
	//implement methods
	
	public void Read() {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter Student ID no: ");
		StudentId = sc.nextLine();
		
		System.out.println("Enter Student name : ");
		name = sc.nextLine();	
		
		System.out.println("Enter Student Address : ");
		address = sc.nextLine();	
		
		System.out.println("Enter Student Contact Number : ");
		contactNumber = sc.nextLine();	
		
	}
	
	public void Print() {
		System.out.println("Student Information");
		System.out.println();
		System.out.println("Student ID is : " + StudentId);
		System.out.println("Student Name is : " + name);
		System.out.println("Student Address is : " + address);
		System.out.println("Student Telephone is : " + contactNumber);
		System.out.println();
	}
	
	
	

}
