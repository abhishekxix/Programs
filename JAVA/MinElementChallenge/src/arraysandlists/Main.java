package arraysandlists;

import java.util.Scanner;

public class Main {

    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int numberOfElements = 0;
        System.out.print("\nEnter the number of integers to fill the array : ");
        numberOfElements = scanner.nextInt();
	    int[] array = readIntegersFromConsole(numberOfElements);
        System.out.println("Min value is : " + findMinValue(array));
        scanner.close();
    }

    public static int[] readIntegersFromConsole(int numberOfElements) {
        int[] values = new int[numberOfElements];
        System.out.println("Enter " + numberOfElements + " integers : ");

        for(int i = 0; i < values.length; i++)
            values[i] = scanner.nextInt();

        return values;
    }

    public static int findMinValue(int[] array) {
        int minIndex = 0;

        for(int i = 0; i < array.length; i++)
            if(array[minIndex] > array[i])
                minIndex = i;

        return array[minIndex];
    }
}
