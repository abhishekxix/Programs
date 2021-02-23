package com.abhisheksingh;

import java.util.InputMismatchException;
import java.util.NoSuchElementException;
import java.util.Scanner;

public class Example {
    private static final Scanner scanner;

    static {
        scanner = new Scanner(System.in);
    }
    public static void main(String[] args) {
        int result;
        try {
            result = divide();
            System.out.println(result);
        }
        catch(ArithmeticException | NoSuchElementException e) {
            System.out.println(e.getMessage() + " handled.");
        }
        scanner.close();
    }

    private static int getInt() {
        System.out.print("Please enter an integer -> ");

        while(true) {   // Input validation in java.
            try {
                return scanner.nextInt();
            }
            catch(InputMismatchException e) {
//                go round again and read past the end of line in the input.
                scanner.nextLine();
                System.out.print("Please enter an integer using only the digits (0 - 9) -> ");
            }
        }
    }

    private static int divide() throws ArithmeticException {
        int x = getInt();
        int y = getInt();
        System.out.println("x is " + x + " y is " + y);
        if(y == 0)
            throw new ArithmeticException("Attempt to divide by zero");
        return x / y;
    }
}