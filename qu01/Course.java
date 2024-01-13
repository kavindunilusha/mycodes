package qu01;

import java.util.ArrayList;
import java.util.Scanner;

public class Course {
	
	private String CourseId;
	private String cName;
	private String instructor;
	 private ArrayList<Student> enrolledStudents = new ArrayList<>();
	
	
	//overload constructor 
	
	public Course(String courseId, String cName, String instructor) {
		super();
		this.CourseId = courseId;
		this.cName = cName;
		this.instructor = instructor;
	}
	
	public void Read() {
		
		Scanner sc = new Scanner(System.in);
		
		
		System.out.println("Enter Course ID :");
		CourseId = sc.nextLine();
		
		System.out.println("Enter Course First name :");
		cName = sc.nextLine();
		
		System.out.println("Enter Course Instructor :");
		instructor = sc.nextLine();
	}
	public void AddStudent(Student student) {
        enrolledStudents.add(student);
    }
	public void Print() {
		
		System.out.println("Course Information");
		
		System.out.println("Course ID :" +CourseId);
		System.out.println("Course Name :" +cName);
		System.out.println("Course Instructor :" +instructor);
		
		System.out.println("Enrolled Students:");
        for (Student student : enrolledStudents) {
            student.Print();
        }
	}
	
	

}
