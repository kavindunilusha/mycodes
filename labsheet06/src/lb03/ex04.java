package lb03;

import java.util.Stack;

public class ex04 {

	public static void main(String[] args) {
		
		
		Stack<Integer> stk = new Stack<>();
		
		boolean result = stk.empty();
		
		System.out.println("Before entering :"+result);
		
		stk.push(15);
		stk.push(20);
		stk.push(95);
		stk.push(45);
		
		System.out.println(stk);
		
		System.out.println("Top elements is :"+stk.peek());
		
		stk.pop();
		
		System.out.println("Top elements is :"+stk.peek());
		
		System.out.println(stk);
		
		

	}

}
