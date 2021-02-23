package com.abhisheksingh;

import java.util.*;

public class SetMain {

    public static void main(String[] args) {
//        Bulk operations on Sets.
        /*
         * The addAll method of the set interface is equivalent to the union of two sets.
         * The retainAll is equivalent to the intersection of two sets.
         * The removeAll is equivalent to the difference of two sets.
         * The containsAll is equivalent to the subset test.
         */
        Set<Integer> squares = new HashSet<>();
        Set<Integer> cubes = new HashSet<>();

        for(int i = 1; i <= 100; i++) {
            squares.add((int)Math.pow(i, 2));
            cubes.add((int)Math.pow(i, 3));
        }

        System.out.println("There are " + squares.size() + " squares and "
                        + cubes.size() + " cubes.");
        Set<Integer> union = new HashSet<>(squares);
        union.addAll(cubes);

        System.out.println("Union contains " + union.size() + " numbers.");

        for(var i : union)
            System.out.print(i + " ");

        System.out.println();
        Set<String> words = new HashSet<>();
        String sentence = "one day in the year of the fox.";
        String[] arrayWords = sentence.split(" ");
        words.addAll(Arrays.asList(arrayWords));

        for(var s : words)
            System.out.println(s);
    }
}
