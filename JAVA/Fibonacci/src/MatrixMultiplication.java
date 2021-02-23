import java.util.Scanner;

public class MatrixMultiplication {

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {

        System.out.print("Enter the size of matrices (n, m) -> ");
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[][] m1 = new int[n][m];
        int[][] m2 = new int[n][m];

        System.out.println("Enter m1:");
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                m1[i][j] = sc.nextInt();
                sc.nextLine();
            }

        }
        System.out.println();

        System.out.println("Enter m2:");
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                m2[i][j] = sc.nextInt();
                sc.nextLine();
            }

        }
        System.out.println();

        int[][] result = multiplyMatrices(m1, m2);

        System.out.println("m1:");
        for (int[] ints : m1) {
            for (int j = 0; j < m1[0].length; j++) {
                System.out.printf("%-3d ", ints[j]);
            }
            System.out.println();
        }

        System.out.println("m2:");
        for (int[] ints : m2) {
            for (int j = 0; j < m2[0].length; j++) {
                System.out.printf("%-3d ", ints[j]);
            }
            System.out.println();
        }

        System.out.println("result:");
        for (int[] ints : result) {
            for (int j = 0; j < result[0].length; j++) {
                System.out.printf("%-3d ", ints[j]);
            }
            System.out.println();
        }

    }

    private static int[][] multiplyMatrices(int[][] m1, int[][] m2) {
        int[][] result = new int[m1.length][m1[0].length];

        for(int i = 0; i < m1.length; i++) {
            for(int j = 0; j < m1[0].length; j++) {
                result[i][j] = 0;
                for(int k = 0; k < m1.length; k++) {
                    result[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }

        return result;
    }
}
