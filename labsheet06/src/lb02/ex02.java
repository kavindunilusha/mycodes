package lb02;

import java.util.ArrayList;

public class ex02 {

	public static void main(String[] args) {
		
		ArrayList<Student> studentList = new ArrayList<>();
		
		studentList.add(new Student("IT101","Kavindu Nilush",4));
		studentList.add(new Student("IT102","Sakindu Malshan ",4));
		studentList.add(new Student("IT103","Erandi Amarasekara",4));
		
		System.out.println("Student Details:");
		for(Student student:studentList) {
			
			System.out.println(student);
		}

	}

}
