public class Sorting {

    public static void selectionSort(int []array, int n) {
        int minIndex = 0;
        int temp = 0;

        for(int i = 0; i < n; i++) {
            minIndex = i;

            for(int j = i; j < n; j++) {
                if(array[j] < array[minIndex])
                    minIndex = j;
            }
            temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}
