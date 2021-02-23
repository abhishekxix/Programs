package com.abhisheksingh;

import java.util.HashMap;
import java.util.Map;

public class MyMap {

    public static void main(String[] args) {
        Map<String, String> languages = new HashMap<>();
        System.out.println(languages.put("Java", "A compiled high level, object oriented, platform independent language") +  "\n" +   //Inserts the key value pair in the hashmap
        languages.put("Python", "An interpreted, object oriented, high level programming language with dynamic semantics.") + "\n" +
        languages.put("Algol", "Algorithmic language") + "\n" +
        languages.put("BASIC", "Beginners All Purpose Symbolic Instruction code.") + "\n" +
        languages.put("Lisp", "Therein lies madness") + "\n" +
        languages.put("Java", "A compiled high level, object oriented language")   /*overwtites the value if the key value pair already exists*/);

//        System.out.println("\n" + languages.get("Java"));
        //The languages.put() method returns null if the key - value pair is being inserted for the first time and returns the previous value if the same key is entered with a new value.

        languages.putIfAbsent("Java", "yoooo");     //used to prevent concurrency issues so that a thread does not enter a key only for it to be overwritten by another thread.
        if(languages.containsKey("Java")) {     //containsKey() & containsValue() methods boolean value.
            System.out.println("Java is already in the map");
        }
        else
            languages.put("Java", "Hello World!");
        System.out.println();
        for (var i : languages.keySet()) {  //returns a set of keys
            System.out.println(i + " : " + languages.get(i));   //there is no paricular ordering of elements in a hashmap
        }

        System.out.println("===================================");
    /*This returns the value of the key*/
        System.out.println(languages.remove("Java"));   // or languages.remove(key, value) returns boolean
        System.out.println("===================================");
//        languages.replace("Lisp", "A functional programming language with imperative features.");   //this method replaces the value of the key only if it is currently mapped to a value and returns the previous value before the replacement takes place. else if the key has not been mapped to a value in the map, null is returned by this method.

//        System.out.println(languages.replace("Scala", "This will not be added and null will be returned"));
        //There is also another version of this replace method that returns a boolean status of the replacement being done or not.
        //That goes like as shown under.
        if(languages.replace("Java", "A compiled high level, object oriented language", "This is a compiled language"))
            System.out.println("Java value replaced successfully");
        else
            System.out.println("Something went wrong"); //the things that can go wrong are the key or the old value associated with the key.

        for (var i : languages.keySet()) {  //returns a set of keys
            System.out.println(i + " : " + languages.get(i));   //there is no paricular ordering of elements in a hashmap
        }
    }
}
