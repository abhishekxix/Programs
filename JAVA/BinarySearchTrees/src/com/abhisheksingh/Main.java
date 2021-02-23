package com.abhisheksingh;

import java.util.ArrayList;

public class Main {

    public static void main(String[] args) {
       /* BinarySearchTree binarySearchTree = new BinarySearchTree(5);
        binarySearchTree.insert(1);
        binarySearchTree.insert(2);
        binarySearchTree.insert(3);
        binarySearchTree.insert(4);
        binarySearchTree.insert(6);
        binarySearchTree.insert(7);
        binarySearchTree.insert(8);
        binarySearchTree.insert(9);
        binarySearchTree.insert(10);

        BinarySearchTree.Node result = BinarySearchTree.find(5, binarySearchTree.getRootOfTheTree());
        System.out.println(result.getKey());

        result = BinarySearchTree.find(6, binarySearchTree.getRootOfTheTree());
        System.out.println(result.getKey());

        result = BinarySearchTree.find(7, binarySearchTree.getRootOfTheTree());
        System.out.println(result.getKey());

        result = BinarySearchTree.find(8, binarySearchTree.getRootOfTheTree());
        System.out.println(result.getKey());

        result = BinarySearchTree.find(9, binarySearchTree.getRootOfTheTree());
        System.out.println(result.getKey());

        result = BinarySearchTree.find(10, binarySearchTree.getRootOfTheTree());
        System.out.println(result.getKey());

//        binarySearchTree.delete(6);
        result = BinarySearchTree.find(6, binarySearchTree.getRootOfTheTree());
        System.out.println(result.getKey());
        binarySearchTree.delete(6);

        ArrayList<BinarySearchTree.Node> rangeResult = binarySearchTree.rangeSearch(5, 12);

        for(var i : rangeResult)
            System.out.print(i.getKey() + " ");*/

        AVLTree binarySearchTree = new AVLTree(10);
//        binarySearchTree.insert(1);
//        binarySearchTree.insert(2);
//        binarySearchTree.insert(3);
//        binarySearchTree.insert(4);
//        binarySearchTree.insert(6);
//        binarySearchTree.insert(7);
//        binarySearchTree.insert(8);
//        binarySearchTree.insert(9);
//        binarySearchTree.insert(10);
//
//        AVLTree.Node result = AVLTree.find(5, binarySearchTree.getRoot());
//        System.out.println(result.getKey());
//
//        result = AVLTree.find(6, binarySearchTree.getRoot());
//        System.out.println(result.getKey());
//
//        result = AVLTree.find(7, binarySearchTree.getRoot());
//        System.out.println(result.getKey());
//
//        result = AVLTree.find(8, binarySearchTree.getRoot());
//        System.out.println(result.getKey());
//
//        result = AVLTree.find(9, binarySearchTree.getRoot());
//        System.out.println(result.getKey());
//
//        result = AVLTree.find(10, binarySearchTree.getRoot());
//        System.out.println(result.getKey());
//
////        binarySearchTree.delete(6);
//        result = AVLTree.find(6, binarySearchTree.getRoot());
//        System.out.println(result.getKey());
////        binarySearchTree.delete(6);
//
////        for(int i = 1; i <= 10; i++){
////            binarySearchTree.delete(i);
////            System.out.println(binarySearchTree.getSize());
////        }
//        binarySearchTree.inorderTraversal();
//        System.out.println();
//
//        ArrayList<AVLTree.Node> rangeResult = binarySearchTree.rangeSearch(0, 12);
//
//        if(rangeResult != null)
//            for(var i : rangeResult)
//                System.out.print(i.getKey() + " ");
//
//        System.out.println();
//        result = binarySearchTree.getMax();
//        System.out.println("Max : " + result.getKey());
//
//        result = binarySearchTree.getMin();
//        System.out.println("Min : " + result.getKey());

        for(int i = 10; i < 16; i++)
            binarySearchTree.insert(i);

        binarySearchTree.inorderIt();
        System.out.println("The size is : " + binarySearchTree.getSize());
        System.out.println("Height is : " + binarySearchTree.height());

        AVLTree tree2 = new AVLTree(0);

        for(int i = 0; i < 10; i++)
            tree2.insert(i);

        tree2 = AVLTree.mergeTrees(tree2, binarySearchTree);

        tree2.inorderIt();
        System.out.println();
        System.out.println("The size is : " + tree2.getSize());
        System.out.println("Height is : " + tree2.height());

        AVLTree[] result = tree2.split(6);

        result[0].inorderIt();
        System.out.println();
        result[1].inorderIt();

        
    }

}