package quiz01;

import java.util.ArrayList;

public class Main {

	public static void main(String[] args) {
		
		ArrayList<String> food = new ArrayList<String>();
		
		food.add("pizza");
		food.add("hamburger");
		food.add("hot dog");
		
		for(int i = 0;i<food.size();i++) {
			System.out.println(food.get(i));
			
		}
		
		

	}

}
