package lb03;
import java.util.HashSet;
import java.util.Scanner;

public class ex03 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		HashSet<Integer> heights = new HashSet<Integer>();
		
		for(int i = 0;i < 10;i++) {
			System.out.print("Enter  height:");
			int num = sc.nextInt();
			heights.add(num);
			
		}
		
		for(Integer num:heights) {
			System.out.println(num);
			
		}
		sc.close();

	}

}
