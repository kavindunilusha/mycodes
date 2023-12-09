package labsheet06;

import java.util.ArrayList;
import java.util.Scanner;

public class ex01 {

	public static void main(String[] args) {
		ArrayList<Integer> number = new ArrayList<>();
		
		if(number.isEmpty()) {
			System.out.println("Array list is empty.");
			
		}
		else {
			System.out.println("Array list is not empty");
		}
		
		Scanner sc = new Scanner(System.in);
		
		for(int i = 0;i<10;i++) {
			System.out.println("Enter a number:");
			
			int num =sc.nextInt();
			
			number.add(num);
		}
		
		int  total =0;
		for(Integer num: number) {
			System.out.println(num);
			
			total+=num;
		}
		System.out.println("Total is" + total);
		sc.close();
		
		

	}

}
