package com.abhisheksingh;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {
    private static final Scanner scanner;

    static {
        scanner = new Scanner(System.in);
    }

    public static void main(String[] args) {
//        int x = 98;
//        int y = 0;
//
//        System.out.println(divideLBYL(x, y));
//        System.out.println(divideEAFP(x, y));
//        System.out.println(divide(x, y));
        int x = getIntEAFP();
        System.out.println("x is " + x);
        scanner.close();
    }

    private static int getInt() {
        return scanner.nextInt();
    }

//    private static int getIntLBYL() {
//        boolean isValid = true;
//        System.out.println("Please enter an integer : ");
//        String input = scanner.nextLine();
//        for(int i = 0; i < input.length(); i++) {
//            if(!Character.isDigit(input.charAt(i))) {
//                isValid = false;
//                break;
//            }
//        }

//        if(isValid) {
//            return Integer.parseInt(input);
//        }
//        return 0;
//    }

    private static int getIntEAFP() {
        System.out.println("Please enter an integer : ");
        try {
            return scanner.nextInt();
        }
        catch(InputMismatchException e) {
            return 0;
        }
    }

    private static int divideLBYL(int x, int y) {
        if(y != 0)
            return x/y;

        return 0;
    }

    private static int divideEAFP(int x, int y) {
        try {
            return x / y;
        }
        catch(ArithmeticException e) {
            return 0;
        }
    }

    private static int divide(int x, int y) {
        return x / y;
    }
}
