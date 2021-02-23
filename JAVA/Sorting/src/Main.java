import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements in array : ");
        int n = 0;

        n = scanner.nextInt();
        scanner.nextLine();

        int array[];
        array = new int[n];

        System.out.print("\nEnter the elements of the array separated by a space : ");

        for(int i = 0; i < n; i++) {
            array[i] = scanner.nextInt();
            scanner.nextLine();
        }
        System.out.println("The array before selection sort is :");
        for(int i  = 0; i < n; i++)
            System.out.print(array[i] + " ");

        Sorting.selectionSort(array, n);
        System.out.println("\nThe array after applying selection sort is :");

        for(int i  = 0; i < n; i++)
            System.out.print(array[i] + " ");
        System.out.println();
        scanner.close();
    }
}
