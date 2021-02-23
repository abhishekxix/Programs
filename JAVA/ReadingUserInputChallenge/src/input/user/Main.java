package input.user;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	    int sum = 0;
	    int count = 0;

	    Scanner scanner = new Scanner(System.in);

	    while(count < 10) {
			System.out.printf("Enter number #%d : ", count + 1);

			if(scanner.hasNextInt()) {
                sum += scanner.nextInt();
            }
	        else
                System.out.println("Invalid entry!");
	        count++;
			scanner.nextLine();
	    }

        System.out.println("\nThe sum of the entered numbers is : " + sum);
	    scanner.close();
    }
}
