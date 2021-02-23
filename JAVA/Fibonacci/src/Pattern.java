import java.util.Scanner;

public class Pattern {
    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        System.out.print("Enter the size of the pattern to be printed -> ");
        int n = sc.nextInt();
        printPattern(n);
    }

    private static void printPattern(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
