//package com.abhisheksingh;
//
//import java.util.ArrayList;
//import java.util.HashSet;
//import java.util.Set;
//
//
//public class MyHashMap<K, V> {
//    private int numBuckets;
//    private int numElements;
//    private double loadFactor;
//    private ArrayList<V> buckets;
//    private final Set<K> keySet;
//    private final Set<Pair<K, V>> entrySet;
//    public final int DEFAULT_INITIAL_SIZE = 7;
//    public final double DEFAULT_LOAD_FACTOR;
//
//    {
//        this.buckets = new ArrayList<>();
//        for(int i = 0; i < DEFAULT_INITIAL_SIZE; i++) {
//            buckets.add(null);
//        }
//        keySet = new HashSet<>();
//        entrySet = new HashSet<>();
//        numBuckets = buckets.size();
//        numElements = 0;
//        loadFactor = ((double) numElements) / numBuckets;
//    }
//
//    public MyHashMap(double loadFactor) {
//        this.DEFAULT_LOAD_FACTOR = loadFactor;
//    }
//
//    public MyHashMap() {
//        this(0.75);
//    }
//
//    private int calculateHashValue(K key) {
//        return Math.abs(key.hashCode() % numBuckets);
//    }
//
//    private void updateLoadFactor() {
//        loadFactor = ((double) numElements) / numBuckets;
//    }
//
//    public boolean isEmpty() {
//        return (numElements == 0);
//    }
//
//    public boolean containsKey(K key) {
//        return keySet.contains(key);
//    }
//
//    public boolean containsValue(V value) {
//        for(var i : entrySet) {
//            if(i.getValue().equals(value))
//                return true;
//        }
//        return false;
//    }
//
//
//    public V put(K key, V value) {
//        if(!keySet.contains(key)) {
//            numElements++;
//            updateLoadFactor();
//            keySet.add(key);
//            entrySet.add(new Pair<> (key, value));
//        }
//        if(loadFactor >= DEFAULT_LOAD_FACTOR)
//            rehash();
//
//        int hash = calculateHashValue(key);
//        V oldValue = buckets.get(hash);
//        buckets.set(hash, value);
//
//        return oldValue;
//    }
//
//    public V remove(K key) {
//        if(!keySet.contains(key))
//            return null;
//
//        int hash = calculateHashValue(key);
//        V value = buckets.get(hash);
//        buckets.set(hash, null);
//        keySet.remove(key);
//        entrySet.remove(new Pair<>(key, value));
//        numElements--;
//        updateLoadFactor();
//        return value;
//    }
//    public V get(K key) {
//        return buckets.get(calculateHashValue(key));
//    }
//
//    private void rehash() {
//        numBuckets *= 2;
//        ArrayList<V> newBuckets = new ArrayList<>();
//
//        for(int i = 0; i < numBuckets; i++) {
//            newBuckets.add(null);
//        }
//
//        for(var i : entrySet) {
//            newBuckets.add(calculateHashValue(i.getKey()), i.getValue());
//        }
//        buckets = newBuckets;
//        updateLoadFactor();
//    }
//}