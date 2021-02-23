package com.abhisheksingh;

public class Main {

    public static void main(String[] args) {
        MyDisjointSets myDisjointSets = new MyDisjointSets(10);
        for(int i = 0; i < 10; i++) {
            myDisjointSets.makeSet(i);
        }

        myDisjointSets.union(0, 1);
        myDisjointSets.union(0, 2);
        myDisjointSets.union(0, 3);
        myDisjointSets.union(0, 4);
        myDisjointSets.union(5, 6);
        myDisjointSets.union(0, 5);


        for(int i = 0; i < 7; i++) {
            System.out.println(myDisjointSets.find(i) + " " + myDisjointSets.getRank(i));
        }
    }
}
