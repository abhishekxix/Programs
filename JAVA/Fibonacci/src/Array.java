import java.util.Scanner;

public class Array {

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int n;

        System.out.print("Enter the size of the array -> ");
        n = sc.nextInt();
        int[] arr = new int[n];

        System.out.printf("Enter %d values -> ", n);

        for(int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
            sc.nextLine();
        }

        for(int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}
