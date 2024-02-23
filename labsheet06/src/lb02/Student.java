package lb02;

public class Student {
	
	private int studentID;
	private String name;
	private double gpa;
	
	public Student(String stduentID, String name,double gpa) {
		
		this.studentID = studentID;
		this.name = name;
		this.gpa = gpa;
		
	}
	public String toString() {
		return "\n\nStudent id:"+studentID+",name:"+name+",GPA"+gpa;
	}
	
	public String getStudentID() {
		return studentID;
	}
	
	
		

}
