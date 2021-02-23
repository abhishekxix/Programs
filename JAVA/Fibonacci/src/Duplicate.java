import java.util.HashMap;
import java.util.Scanner;

public class Duplicate {

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int n;

        System.out.print("Enter the size of the array -> ");
        n = sc.nextInt();
        int[] arr = new int[n];
        HashMap<Integer, Integer> count = new HashMap<>();

        System.out.printf("Enter %d values -> ", n);

        for(int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
            sc.nextLine();
            if(count.containsKey(arr[i])) {
                Integer x = count.get(arr[i]);
                count.put(arr[i], x + 1);
            } else {
                count.put(arr[i], 1);
            }
        }
        System.out.print("Following are the repeating elements : \n");
        for (var i : count.keySet()) {
            if(count.get(i) > 1) {
                System.out.println(i);
            }
        }

    }
}
