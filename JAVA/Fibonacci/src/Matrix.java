import java.util.Scanner;

public class Matrix {

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int[][] m = new int[3][3];
        System.out.println("Enter the matrix elements : ");

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                m[i][j] = sc.nextInt();
                sc.nextLine();
            }
        }

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                System.out.print(m[i][j] + " ");
            }
            System.out.println();
        }
    }
}
