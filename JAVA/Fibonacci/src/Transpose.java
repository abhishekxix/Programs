import java.util.Scanner;

public class Transpose {

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {

        System.out.println("Enter the size of matrix -> ");
        int n = sc.nextInt();
        int m = sc.nextInt();

        int[][] matrix = new int[n][m];

        System.out.println("Enter the values of the matrix -> ");
        for(int i = 0; i < matrix.length; i++) {
            for(int j = 0; j < matrix[0].length; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }
        int[][] transposeMatrix = transpose(matrix);

        System.out.println("The original matrix:");
        for(var ints : matrix) {
            for(var j : ints) {
                System.out.printf("%-3d ", j);
            }
            System.out.println();
        }

        System.out.println("The transpose:");
        for(var ints : transposeMatrix) {
            for(var j : ints) {
                System.out.printf("%-3d ", j);
            }
            System.out.println();
        }
    }

    private static int[][] transpose(int[][] matrix) {
        int[][] transposeMatrix = new int[matrix[0].length][matrix.length];

        for(int i = 0; i < matrix.length; i++) {
            for(int j = 0; j < matrix[0].length; j++) {
                transposeMatrix[j][i] = matrix[i][j];
            }
        }
        return  transposeMatrix;
    }
}
