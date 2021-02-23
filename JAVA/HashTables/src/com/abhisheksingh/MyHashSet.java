package com.abhisheksingh;

import java.util.ArrayList;
import java.util.LinkedList;

public class MyHashSet<E> {

    private ArrayList<LinkedList<E>> buckets;
    private int numBuckets;
    private int numElements;
    private double loadFactor;
    private final double DEFAULT_LOAD_FACTOR;


    {
        buckets = new ArrayList<>();
        for(int i = 0; i < 7; i++) {
            buckets.add(new LinkedList<>());
        }
        numBuckets = buckets.size();
    }

    public MyHashSet(double DEFAULT_LOAD_FACTOR) {
        this.numElements = 0;
        this.DEFAULT_LOAD_FACTOR = DEFAULT_LOAD_FACTOR;
        this.loadFactor = ((double)numElements) / numBuckets;
    }

    public MyHashSet() {
        this(0.75);
    }

    public void insert(E key) {
        if(!isEmpty() && hasKey(key))
            return;

        if(loadFactor >= DEFAULT_LOAD_FACTOR) {
            rehash();
        }
        buckets.get(calculateHashValue(key)).add(0, key);
        numElements++;
        updateLoadFactor();
    }

    public boolean hasKey(E key) {
        var requiredChain = buckets.get(calculateHashValue(key));
        for(var i : requiredChain)
            if(key.equals(i))
                return true;

        return false;
    }

    public void remove(E key) {
        if(!hasKey(key))
            return;
        var requiredChain = buckets.get(calculateHashValue(key));
        requiredChain.removeIf(key::equals);
        numElements--;
        updateLoadFactor();
    }

    private void rehash() {
        ArrayList<LinkedList<E>> newBuckets = new ArrayList<>();
        numBuckets *= 2;
        for(int i = 0; i < numBuckets; i++) {
            newBuckets.add(new LinkedList<>());
        }

        for(var chain : buckets) {
            for(var element : chain) {
                newBuckets.get(calculateHashValue(element)).add(0, element);
            }
        }
        buckets = newBuckets;
        updateLoadFactor();
    }

    private int calculateHashValue(E key) {
        return key.hashCode() % numBuckets;
    }

    public int size() {
        return numElements;
    }

    private void updateLoadFactor() {
        loadFactor = ((double)numElements) / numBuckets;
    }

    public boolean isEmpty() {
        return (numElements == 0);
    }
}
