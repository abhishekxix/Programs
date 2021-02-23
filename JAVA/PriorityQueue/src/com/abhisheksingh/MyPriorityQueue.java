package com.abhisheksingh;

import java.util.ArrayList;

public class MyPriorityQueue {
    private ArrayList<Integer> binaryHeap;

    public MyPriorityQueue() {
        this.binaryHeap = new ArrayList<>();
    }

    private int parent(Integer i) {
        return (i - 1) / 2;
    }

    private int leftChild(Integer i) {
        return (2 * i) + 1;
    }

    private int rightChild(Integer i) {
        return (2 * i) + 2;
    }

    private void shiftUp(Integer i) {
        Integer temp;
        while(i > 0 && binaryHeap.get(i) > binaryHeap.get(parent(i))) {
           temp = binaryHeap.get(i);
           binaryHeap.set(i, binaryHeap.get(parent(i)));
           binaryHeap.set(parent(i), temp);
           i = parent(i);
        }
    }

    private void shiftDown(int i) {
        int maxIndex = i;

        do {
            i = maxIndex;
            int left = leftChild(maxIndex);
            int right = rightChild(maxIndex);

            if (left < binaryHeap.size() && binaryHeap.get(left) > binaryHeap.get(maxIndex))
                maxIndex = left;

            if (right < binaryHeap.size() && binaryHeap.get(right) > binaryHeap.get(maxIndex))
                maxIndex = right;

            if (i != maxIndex) {
                Integer temp = binaryHeap.get(i);
                binaryHeap.set(i, binaryHeap.get(maxIndex));
                binaryHeap.set(maxIndex, temp);
            }
        }while(maxIndex != i);
    }


    public Integer extractMax() {
        if(!binaryHeap.isEmpty()) {
            Integer result = binaryHeap.get(0);
            binaryHeap.set(0, binaryHeap.get(binaryHeap.size() - 1));
            binaryHeap.remove(binaryHeap.size() - 1);
            if(!binaryHeap.isEmpty())
                shiftDown(0);
            return result;
        }
        else
            return Integer.MIN_VALUE;
    }

    public Integer getMax() {
        if(!binaryHeap.isEmpty())
            return binaryHeap.get(0);
        else
            return Integer.MIN_VALUE;
    }

    public void insertElement(int p) {
        binaryHeap.add(p);
        shiftUp(binaryHeap.size() - 1);
    }

    public void remove(int i) {
        binaryHeap.set(i, Integer.MAX_VALUE);
        shiftUp(i);
        extractMax();
    }

    public void changePriority(int i, Integer newPriority) {
        Integer oldPriority = binaryHeap.get(i);
        binaryHeap.set(i, newPriority);
        if(newPriority > oldPriority)
            shiftUp(i);
        else
            shiftDown(i);
    }

    public void test() {
        for(var i : binaryHeap) {
            System.out.println(i);
        }
    }
}
