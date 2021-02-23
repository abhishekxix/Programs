package com.abhisheksingh;

import java.util.ArrayList;

public class BinarySearchTree {

    public static class Node {
        private int key;
        private Node leftChild;
        private Node rightChild;
        private Node Parent;

        public Node(int key, Node leftChild, Node rightChild, Node parent) {
            this.key = key;
            this.leftChild = leftChild;
            this.rightChild = rightChild;
            Parent = parent;
        }

        public int getKey() {
            return key;
        }

        public Node getLeftChild() {
            return leftChild;
        }

        public Node getRightChild() {
            return rightChild;
        }

        public Node getParent() {
            return Parent;
        }

        public void setKey(int key) {
            this.key = key;
        }

        public void setLeftChild(Node leftChild) {
            this.leftChild = leftChild;
        }

        public void setRightChild(Node rightChild) {
            this.rightChild = rightChild;
        }

        public void setParent(Node parent) {
            Parent = parent;
        }
    }

    private Node rootOfTheTree;

    public BinarySearchTree(int key) {
        this.rootOfTheTree = new Node(key, null, null, null);
    }

    public Node getRootOfTheTree() {
        return rootOfTheTree;
    }

    public void setRootOfTheTree(Node rootOfTheTree) {
        this.rootOfTheTree = rootOfTheTree;
    }

    public static Node find(int key, Node root) {
        if(root.getKey() == key)
            return root;

        if(root.getKey() > key) {
            if(root.getLeftChild() != null)
                return find(key, root.getLeftChild());
        }
        if(root.getKey() < key) {
            if(root.getRightChild() != null)
                return find(key, root.getRightChild());
        }
        return root;
    }

    private static Node leftDescendant(Node n) {
        if(n.getLeftChild() == null)
            return n;
        return leftDescendant(n.getLeftChild());
    }

    /**
    * returns @null if the node n has the largest element
    **/
    private static Node rightAncestor(Node n) {
        if(n.getParent() == null)
            return n;

        if(n.getParent().getKey() > n.getKey())
            return n.getParent();

        return null;
    }

    public  Node nextElement(Node n) {
        if(n.getRightChild() != null)
            return leftDescendant(n.getRightChild());

        return rightAncestor(n);
    }

    /**
    * this function returns the nodes that have key values in the range [x, y]
    **/

    public ArrayList<Node> rangeSearch(int x, int y) {
        ArrayList<Node> result = new ArrayList<>();
        Node n = find(x, this.rootOfTheTree);
        while(n != null && n.getKey() <= y) {
            if(n.getKey() >= x)
                result.add(n);
            n = nextElement(n);

        }
        return result;
    }

    public void insert(int key) {
        Node P = find(key, this.rootOfTheTree);
        Node newEntry = new Node(key, null, null, P);

        if(P.getKey() < key)
            P.setRightChild(newEntry);
        else
            P.setLeftChild(newEntry);
    }

    public void delete(int key) {
        Node n = find(key, this.rootOfTheTree);

        if(n.getKey() == key) {
            if(n.getRightChild() == null) {
                if(n.getParent() != null) {
                    if (n.getParent().getLeftChild() == n)
                        n.getParent().setLeftChild(n.getLeftChild());

                    else
                        n.getParent().setRightChild(n.getLeftChild());
                }
                n.getLeftChild().setParent(n.getParent());
            }
            else {
                Node x = nextElement(n);
                if(x.getParent() != null) {
                    if(x.getParent().getLeftChild() == x)
                        x.getParent().setLeftChild(x.getRightChild());

                    else
                        x.getParent().setRightChild(x.getRightChild());
                }

                if(x.getRightChild() != null)
                    x.getRightChild().setParent(x.getParent());


                if(n.getParent() != null) {
                    if(n.getParent().getLeftChild() == n)
                        n.getParent().setLeftChild(x);

                    else
                        n.getParent().setRightChild(x);
                }

                x.setParent(n.getParent());
            }

            n.setLeftChild(null);
            n.setParent(null);
            n.setRightChild(null);
        }
        else
            System.out.println("Element not found in the tree.");
    }
}