package arraysandlists;

import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
//	    int[] myArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	    myArray = new int[10];  //or we can do it like int[] myArray = new int[10];
//
//        myArray[5] = 50;
//
//        printArray(myArray);

        int[] myIntegers = getIntegers(5);
        printArray(myIntegers);
        scan.close();
//        int [] newArray = Arrays.copyOf(myIntegers, myIntegers.length);
    }

    public static int[] getIntegers(int number) {
        System.out.println("Enter " + number + " integer values");
        int[] values = new int[number];
        for(int i = 0; i < values.length; i++) {
            values[i] = scan.nextInt();
        }
        return values;
    }
    public static void printArray(int[] array) {
        for(int i = 0; i < array.length; i++)
            System.out.print(array[i] + " ");
    }
}
