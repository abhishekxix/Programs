import java.util.Scanner;

public class Marks {

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {

        int[] arr = new int[5];

        System.out.printf("Enter %d marks -> ", 5);


        int sum = 0;
        double percentage = 0;

        for(int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
            sc.nextLine();
            sum =+ arr[i];
        }
        percentage = (double)sum / 500;
        percentage *= 100;
        System.out.printf("The sum of the marks is %d and percentage is %f", sum, percentage);

    }
}
