package qu01;

import java.util.ArrayList;

public class StudentApp {

	public static void main(String[] args) {
		
		ArrayList<Student> students = new ArrayList<>();
		ArrayList<Course> courses = new ArrayList<>();
		
		Student student1 = new Student("IT111","Kamal Perera","Colombo 2","0758956232");
		student1.Read();
		
		Student student2 = new Student("IT222","Nimali Herath","Colombo 3","0757854213");
		student2.Read();
		
		Course course1 = new Course("CID123","OOP","Sumli perera;");
		course1.Read();
		
		Course course2 = new Course("CID456","DMS","Priyal Perara");
		course2.Read();
		
		course1.AddStudent(student1);
		course2.AddStudent(student2);
		
		students.add(student1);
		students.add(student2);
		
		courses.add(course1);
		courses.add(course2);
		
		
		for (Student student : students) {
            student.Print();
        }

        for (Course course : courses) {
            course.Print();
        }
		
		
				

	}

}
