package com.abhisheksingh;

public class Main {

    public static void main(String[] args) {

        MyHashSet<String> myHashSet = new MyHashSet<>();
        for(int i = 0; i < 10; i++) {
            myHashSet.insert(String.valueOf(i));
        }
        System.out.println(myHashSet.size());
        for(int i = 0; i < 10; i++) {
            myHashSet.remove(String.valueOf(i));
        }
        System.out.println(myHashSet.isEmpty());

//        MyHashMap<String, Integer> myHashMap = new MyHashMap<>();
//        myHashMap.put("Abhishek", 1);
//        myHashMap.put("Anmol", 2);
//        myHashMap.put("Samaksh", 3);
//        myHashMap.put("Ramneek", 4);
//
//        System.out.println(myHashMap.isEmpty());
//
//        myHashMap.remove("Abhishek");
//        myHashMap.remove("Anmol");
//        myHashMap.remove("Samaksh");
//        myHashMap.remove("Ramneek");
//        System.out.println(myHashMap.isEmpty());

        System.out.println(RabinKarpsAlgorithm.findPatternInText("MynameisAbhishek", "Abhishek"));
    }
}
