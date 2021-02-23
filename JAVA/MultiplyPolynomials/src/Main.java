public class Main {

    public static void main(String[] args) {
        int A[], B[];
        A = new int[] {3, 2, 1, 2};
        B = new int[] {4, 3, 2, 3};

        int product[];
        product = new int [7];

        product = MultiplyPoly.multiplyMadeByMe(A, B, 4);

        for(int i = 0; i < 7; i++)
            System.out.print(product[i] + " ");
    }
}
