package com.abhisheksingh;

public class Main {

    public static void main(String[] args) {
//	    MyLinkedList list = new MyLinkedList(null);
//	    list.traverse(list.getRoot());

	    String stringData = "Darwin Brisbane Perth Melbourne Canberra Adelaide Sydney Canberra";
//        String stringData = "6 5 4 3 2 1";

        String[] data = stringData.split(" ");


//	    for(String s : data) {
//	        list.addItem(new Node(s));
//        }
//        System.out.println();
//        list.traverse(list.getRoot());
//        System.out.println();
//        list.traverse(list.getRoot());
//
//        list.removeItem(new Node("0"));
//        list.removeItem(new Node("1"));
//        list.removeItem(new Node("2"));
//        list.removeItem(new Node("3"));
//        list.removeItem(new Node("4"));
//        list.removeItem(new Node("5"));
//        list.removeItem(new Node("6"));
//        list.removeItem(new Node("6"));
//        list.traverse(list.getRoot());



        SearchTree tree = new SearchTree(null);
        tree.traverse(tree.getRoot());

        for(String s : data) {
	        tree.addItem(new Node(s));
        }
        System.out.println();
        tree.traverse(tree.getRoot());
        System.out.println();
        tree.traverse(tree.getRoot());
        System.out.println();

        tree.removeItem(new Node("0"));
        tree.removeItem(new Node("1"));
        tree.removeItem(new Node("2"));
        tree.removeItem(new Node("3"));
        tree.removeItem(new Node("4"));
        tree.removeItem(new Node("5"));
        tree.removeItem(new Node("6"));
        tree.removeItem(new Node("6"));
        tree.traverse(tree.getRoot());

    }
}
