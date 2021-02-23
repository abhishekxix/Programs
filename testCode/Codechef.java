/* package codechef; // don't place package name! */

import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scanner = new Scanner(System.in);
		
		ArrayList<Integer> inputs = new ArrayList<>();
		
		int i = -1;
		
		do {
		    i++;
		    inputs.add(scanner.nextInt());
		    scanner.nextLine();
		}while(inputs.get(i) != 42);
		inputs.remove(i);
		for(i = 0; i < inputs.size(); i++) {
		    System.out.println(inputs.get(i));
		}
		
		scanner.close();
		
	}
}
