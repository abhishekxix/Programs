package com.abhisheksingh;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
//        MyPriorityQueue myPriorityQueue = new MyPriorityQueue();
//        myPriorityQueue.insertElement(10);
//        myPriorityQueue.insertElement(29);
//        myPriorityQueue.insertElement(8);
//        myPriorityQueue.insertElement(7);
//        myPriorityQueue.insertElement(5);
//        myPriorityQueue.insertElement(0);
//        myPriorityQueue.insertElement(1);
//        myPriorityQueue.insertElement(45);
//        myPriorityQueue.insertElement(8);
//        myPriorityQueue.extractMax();
//        myPriorityQueue.extractMax();
//        myPriorityQueue.extractMax();
//        myPriorityQueue.extractMax();
//        myPriorityQueue.test();

//        while(myPriorityQueue.getMax() > Integer.MIN_VALUE) {
//            System.out.println(myPriorityQueue.extractMax());
//        }

        ArrayList<Integer> numbers = new ArrayList<>();
        int numberOfNumbers = 0;
//        int k = 0;
        numberOfNumbers = scanner.nextInt();
        scanner.nextLine();
//        k = scanner.nextInt();
//        scanner.nextLine();

        for(int i = 0; i < numberOfNumbers; i++) {
            numbers.add(scanner.nextInt());
            scanner.nextLine();
        }
//        partialSort(numbers, k);
        efficientHeapSort(numbers);
        System.out.println(numbers);
    }

    private static void partialSort(ArrayList<Integer> numbers, int k) {
        if(k < numbers.size()) {
            MyPriorityQueue nums = new MyPriorityQueue();
            for(Integer i : numbers) {
                nums.insertElement(i);
            }

            for(int i = 0; i < k; i++) {
                System.out.print(nums.extractMax() + " ");
            }
            System.out.println();
        }
        else
            System.out.println("Invalid entry");
    }

    private static void heapSort(ArrayList<Integer> nums) {
        MyPriorityQueue heap = new MyPriorityQueue();

        for(Integer i : nums) {
            heap.insertElement(i);
        }

        for(int i = nums.size() - 1; i >= 0; i--) {
            nums.set(i, heap.extractMax());
        }
    }

    private static void shiftDown(ArrayList<Integer> binaryHeap, int n, int i) {
        int maxIndex = i;

        do {
            i = maxIndex;
            int left = maxIndex * 2 + 1;
            int right = maxIndex * 2 + 2;

            if (left < n && binaryHeap.get(left) > binaryHeap.get(maxIndex))
                maxIndex = left;

            if (right < n && binaryHeap.get(right) > binaryHeap.get(maxIndex))
                maxIndex = right;

            if (i != maxIndex) {
                Integer temp = binaryHeap.get(i);
                binaryHeap.set(i, binaryHeap.get(maxIndex));
                binaryHeap.set(maxIndex, temp);
            }
        }while(maxIndex != i);
    }

    private static void buildHeapInPlace(ArrayList<Integer> nums, int n) {
        for(int i = (n / 2) - 1; i >= 0; i--) {
            shiftDown(nums, n, i);
        }
    }

    private static void efficientHeapSort(ArrayList<Integer> nums) {
        buildHeapInPlace(nums, nums.size());
        int n = nums.size();
        Integer temp;
        for(int i = n - 1; i > 0; i--) {
            temp = nums.get(0);
            nums.set(0, nums.get(i));
            nums.set(i, temp);
            shiftDown(nums, i, 0);
        }
    }
}
