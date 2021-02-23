package search.binary;

public class Main {

    public static void main(String[] args) {
	    int[] array;
	    array = new int[] {1, 2, 3, 4, 5 , 6};
	    int position  = binarySearch(array, 0, 6 ,4);

        System.out.println(position);
    }

    public static int binarySearch(int[] array, int low, int high, int key) {
        if(high < low) {
            return low - 1;
        }

        int mid  = (low + high) / 2;

        if (key != array[mid]) {
            if (key < mid) {
                return binarySearch(array, low, mid - 1, key);
            }

            return binarySearch(array, mid + 1, high, key);
        } else {
            return mid;
        }

    }
}
