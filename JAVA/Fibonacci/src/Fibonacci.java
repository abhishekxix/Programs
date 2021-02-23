import java.util.Scanner;

public class Fibonacci {

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        System.out.print("This program prints the first n elements of the fibonacci sequence." +
                "\nEnter the value of n -> ");
        int n = sc.nextInt();
        printFibonacci(n);
    }

    private static void printFibonacci(int n) {
        int x = 0;
        int y = 1;
        int sum = 0;
        int temp;

        for(int i = 0; i < n; i++) {
            if(i == 0) {
                System.out.printf("%d ", 1);
            } else {
                sum = x + y;
                x = y;
                y = sum;
                System.out.printf("%d " ,sum);
            }

        }
    }
}
