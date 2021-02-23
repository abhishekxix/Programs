import java.util.Random;

public class ArrayMissing {

    public static void main(String[] args) {
        int[] arr = new int[100];
        int sumArray = 0;
        for(int i = 0; i < arr.length; i++) {
            arr[i] = i + 1;
            sumArray += i + 1;
        }

        Random random = new Random();

        int miss = random.nextInt(100);
        sumArray -= arr[miss];
        arr[miss] = 0;

        int sum = 100 * 101 / 2;

        System.out.printf("The missing number is : %d\n", sum - sumArray);
    }
}
