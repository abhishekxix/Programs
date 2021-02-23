import java.util.Scanner;

public class QaudraticEquations {
    public static final Scanner scanner;
    static {
        scanner = new Scanner(System.in);
    }

    public static void main(String[] args) {
        int a;
        int b;
        int c;
        System.out.print("Enter the values of a, b, c : \n");
        a = scanner.nextInt();
        b = scanner.nextInt();
        c = scanner.nextInt();
        int d = (b * b ) - 4 * a * c;

        if(d >= 0) {
            int x1 = (-b + (int)Math.sqrt(d)) / (2 * a);
            int x2 = (-b - (int)Math.sqrt(d)) / (2 * a);
            System.out.printf("The two roots are %d and %d\n", x1, x2);
        } else {
            System.out.println("The following equation has imaginary roots.");
        }
    }
}
