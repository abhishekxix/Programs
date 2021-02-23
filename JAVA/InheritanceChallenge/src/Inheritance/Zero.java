package Inheritance;

import java.util.Scanner;

public class Zero {

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {

        System.out.println("Enter two numbers : ");
        int a = sc.nextInt();
        int b = sc.nextInt();

        try {
            System.out.println(divide(a, b));
        } catch(ArithmeticException e) {
            System.out.println(e.getMessage());
        }
    }

    private static int divide(int a, int b) throws ArithmeticException {
        if(b == 0) {
            throw new ArithmeticException("Divide by 0 exception.");
        }

        return a / b;
    }
}
