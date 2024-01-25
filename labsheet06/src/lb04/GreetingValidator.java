package lb04;

import java.util.Scanner;

public class GreetingValidator {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		try {
		
		System.out.println("Enter  name :");
		String name = sc.nextLine();
		
		System.out.println("Enter your Age :");
		int age = sc.nextInt();	
		
		validateAge(age);
		
		System.out.println("Hello!!"+name+" ! You are "+age+" years old.");
		}
		
		catch(InvalidInputException e) {
			System.out.println(e.getMessage());
		}
		
		catch(NumberFormatException e) {
			System.out.println("Invalid age : Age should be positive number");
			
			
		}
		finally {
			sc.close();
		}
	}
	
	private static void validateAge(int age) throws InvalidInputException{
		
		if(age<=0||age>120) {
			throw new InvalidInputException(null);
		}
		
		
		
		
		
		
		
		
	}

}
