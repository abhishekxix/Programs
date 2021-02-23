public class MultiplyPoly {

    public static int[] multiplynaive(int []A, int []B, int n) {
        int product[];
        product = new int[(2 * n) - 1];

        for(int i = 0; i < (2 * n) - 1; i++)
            product[i] = 0;

        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                product[i + j] += A[i] * B[j];

        return product;
    }

    public static int[] multiplyMadeByMe(int []A, int []B, int n) {
        int product[];
        product = new int[(2 * n) - 1];

        for(int i = 0; i < (2 * n) - 1; i++)
            product[i] = 0;

        for(int i = 0; i < n; i++) {

            for(int j = i; j < n; j++) {
                product[i + j] += (i == j)? A[i] * B[j] : A[i] * B[j] + B[i] * A[j];
            }
        }

        return product;
    }
}
