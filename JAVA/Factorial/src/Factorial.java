import java.util.Scanner;

public class Factorial {
    private static final Scanner sc;
    static {
        sc = new Scanner(System.in);
    }

    public static void main(String[] args) {
        long n;
        System.out.print("Enter a number to find its factorial -> ");
        n = sc.nextLong();
        System.out.printf("%d! = %d", n, factorial(n));
    }

    private static long factorial(long n) {
        long fac = 1;
        while(n > 0) {
            fac *= n;
            n--;
        }
        return fac;
    }
}
