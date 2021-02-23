package com.abhisheksingh;

import java.util.ArrayList;
import java.util.Stack;

public class AVLTree {

    public AVLTree(Node root) {
        this.root = root;
    }

    static class Node {
        private int key;
        private int height;
        private Node parent;
        private Node leftChild;
        private Node rightChild;
        private int sizeOfSubtree;

        public Node(int key, Node parent, Node leftChild, Node rightChild) {
            this.key = key;
            this.height = 1;
            this.parent = parent;
            this.leftChild = leftChild;
            this.rightChild = rightChild;
            sizeOfSubtree = 1;
        }

        public Node(Node node) {
            this(node.key, null, null, null);
        }

        public int getKey() {
            return key;
        }

        private void adjustHeight() {
            if(rightChild == null && leftChild == null) {
                height = 1;
                return;
            }

            if(rightChild == null)
                height = leftChild.height;
            else if(leftChild == null)
                height = rightChild.height;
            else
                height = Math.max(leftChild.height, rightChild.height);

            height++;
        }

        private void adjustSize() {
            if(rightChild == null && leftChild == null) {
                sizeOfSubtree = 1;
                return;
            }

            if(rightChild == null)
                sizeOfSubtree = leftChild.sizeOfSubtree;
            else if(leftChild == null)
                sizeOfSubtree = rightChild.sizeOfSubtree;
            else
                sizeOfSubtree = Math.max(leftChild.sizeOfSubtree, rightChild.sizeOfSubtree);

            sizeOfSubtree++;
        }
    }

    private Node root;
    private int size;

    public AVLTree(int key) {
        this.root = new Node(key, null, null, null);
        this.size = 1;
    }

    public Node getRoot() {
        return root;
    }

    public int getSize() {
        return size;
    }

    public static Node find(int key, Node root) {
        if(root.getKey() == key)
            return root;

        if(root.getKey() > key) {
            if(root.leftChild != null)
                return find(key, root.leftChild);
        }
        if(root.getKey() < key) {
            if(root.rightChild != null)
                return find(key, root.rightChild);
        }
        return root;
    }

    public int height() {
        return root.height;
    }

    private static Node leftDescendant(Node n) {
        if(n.leftChild == null)
            return n;
        return leftDescendant(n.leftChild);
    }

    /**
     * returns @null if the node n has the largest element
     **/
    private Node rightAncestor(Node n) {
        if(n.parent == null)
            return n;

        if(n.parent.key > n.key)
            return n.parent;

        Node temp = n.parent;

        while(temp != null) {
            if(temp.key > n.key)
                return temp;
            temp = temp.parent;
        }
        return null;
    }

    public  Node nextElement(Node n) {
        if(n.rightChild!= null)
            return leftDescendant(n.rightChild);

        return rightAncestor(n);
    }

    /**
     * this function returns the nodes that have key values in the range [x, y]
     **/

    public ArrayList<Node> rangeSearch(int x, int y) {
        if(this.root == null)
            return null;
        ArrayList<Node> result = new ArrayList<>();
        Node n = find(x, this.root);
        while(n != null && n.getKey() <= y) {
            if(n.getKey() >= x)
                result.add(n);
            n = nextElement(n);
        }
        return result;
    }

    public void insert(int key) {
        Node newKeyParent = find(key, this.root);

        if(newKeyParent.getKey() == key) /*We are not allowing duplicate entries here in our binary search tree*/
            return;

        Node newEntry = new Node(key, newKeyParent, null, null);

        if(newKeyParent.getKey() < key)
            newKeyParent.rightChild = newEntry ;
        else
            newKeyParent.leftChild = newEntry;
        Node temp = newKeyParent;

        while(temp != null) {
            temp.adjustHeight();
            temp = temp.parent;
        }

        rebalance(newKeyParent);
        size++;
    }

    public void delete(int key) {
        Node toDelete = find(key, this.root);
        Node siteOfDeletion = toDelete.parent;
        Node parentReplace = null;
        Node replacingNode;

        if(toDelete.getKey() == key) {
            if(toDelete.rightChild == null) {
                if(toDelete.parent != null) {
                    if (toDelete.parent.leftChild == toDelete)
                        toDelete.parent.leftChild = toDelete.leftChild;
                    else
                        toDelete.parent.rightChild = toDelete.leftChild;
                }
                else {
                    root = toDelete.leftChild;
                }

                if(toDelete.leftChild != null)
                    toDelete.leftChild.parent = toDelete.parent;
            }
            else {
                replacingNode = nextElement(toDelete);
                parentReplace = replacingNode.parent;

                if(replacingNode.parent != null) {
                    if(replacingNode.parent.leftChild == replacingNode)
                        replacingNode.parent.leftChild = replacingNode.rightChild;

                    else
                        replacingNode.parent.rightChild = replacingNode.rightChild;
                }

                if(replacingNode.rightChild != null)
                    replacingNode.rightChild.parent = replacingNode.parent;

                if(toDelete.parent != null) {
                    if(toDelete.parent.leftChild == toDelete)
                        toDelete.parent.leftChild = replacingNode;

                    else
                        toDelete.parent.rightChild = replacingNode;
                }
                else {
                    root = replacingNode;
                }

                replacingNode.parent = toDelete.parent;
                replacingNode.leftChild = toDelete.leftChild;
                if(toDelete.leftChild != null)
                    toDelete.leftChild.parent = replacingNode;

                replacingNode.rightChild = toDelete.rightChild;
                if(toDelete.rightChild != null)
                    toDelete.rightChild.parent = replacingNode;
            }

            toDelete.leftChild = null;
            toDelete.parent = null;
            toDelete.rightChild = null;

            if(parentReplace != null)
                rebalance(parentReplace);

            if(siteOfDeletion != null)
                siteOfDeletion.adjustHeight();
            size--;
        }
        else
            System.out.println("Element not found in the tree.");
    }

    private void rotateRight(Node x) {
        Node p = x.parent;
        Node y = x.leftChild;
        Node b = (y != null) ? y.rightChild : null;

        if(y != null)
            y.parent = p;

        if(p != null) {
            if(x == p.leftChild)
                p.leftChild = y;
            else
                p.rightChild = y;
        }

        x.parent = y;
        if(b != null)
            b.parent = x;
        x.leftChild = b;

        x.adjustHeight();
        x.adjustSize();
        if(y != null) {
            y.rightChild = x;
            y.adjustHeight();
            if(p == null)
                root = y;
            y.adjustSize();
        }
    }

    private void rotateLeft(Node y) {
        Node p = y.parent;
        Node x = y.rightChild;
        Node b = (x != null)? x.leftChild : null;

        if(x != null)
            x.parent = p;
        if(p != null) {
            if(y == p.leftChild)
                p.leftChild = x;
            else
                p.rightChild = x;
        }

        y.parent = x;
        if(b != null)
            b.parent = y;

        y.rightChild = b;
        y.adjustHeight();
        y.adjustSize();

        if(x != null) {
            x.leftChild = y;
            x.adjustHeight();
            if(p == null)
                root = x;
            x.adjustSize();
        }
    }


    private void rebalance(Node n) {
        Node p = n.parent;

        if(getBalance(n) > 1)
            rebalanceRight(n);

        if(getBalance(n) < 0)
            rebalanceLeft(n);

        n.adjustHeight();
        if(p != null)
            rebalance(p);
    }

    private void rebalanceLeft(Node n) {
        Node m = n.rightChild;

        if(m != null && getBalance(m) > 0)
            rotateRight(m);
        rotateLeft(n);
    }

    private void rebalanceRight(Node n) {
        Node m = n.leftChild;

        if(m != null && getBalance(m) < 0)
            rotateLeft(m);
        rotateRight(n);
    }

    private int getBalance(Node n) {
        if(n.leftChild == null && n.rightChild == null)
            return 0;

        int leftHeight = (n.leftChild == null)? 0 : n.leftChild.height;
        int rightHeight = (n.rightChild == null)? 0 : n.rightChild.height;

        return (leftHeight - rightHeight);
    }
    public void inorderTraversal() {
        inorder(this.root);
    }

    //implement it iteratively
    private static void inorder(Node root) {
        if(root == null)
            return;
        inorder(root.leftChild);
        System.out.print(root.key + " ");
        inorder(root.rightChild);
    }

    public Node getMin() {
        Node temp = this.root;

        while(temp.leftChild != null) {
            temp = temp.leftChild;
        }
        return temp;
    }

    public Node getMax() {
        Node temp = this.root;

        while(temp.rightChild != null) {
            temp = temp.rightChild;
        }
        return temp;
    }

    public static Node mergeWithRoot(Node R1, Node R2, Node theFinalRoot) {
        theFinalRoot.rightChild = R2;
        theFinalRoot.leftChild = R1;
        if(R1 != null)
            R1.parent = theFinalRoot;
        if(R2 != null)
            R2.parent = theFinalRoot;
        R1 = null;
        R2 = null;
        theFinalRoot.adjustHeight();
        return theFinalRoot;
    }

    public static AVLTree mergeTrees(AVLTree tree1, AVLTree tree2) {
        if(tree1 == null && tree2 == null)
            return null;

        if(tree1 == null)
            return tree2;

        if(tree2 == null)
            return tree1;

        if(tree1.root == null)
            return tree2;

        if(tree2.root == null)
            return tree1;

        if(Math.abs(tree1.root.height - tree2.root.height) <= 1) {
            Node theFinalRoot = new Node(tree1.getMax());
            tree1.delete(theFinalRoot.key);
            tree1.root = mergeWithRoot(tree1.root, tree2.root, theFinalRoot);
            tree1.size += tree2.size;
            tree2 = null;
            tree1.root.adjustHeight();
            return tree1;
        }

        if(tree1.root.height > tree2.root.height) {
            AVLTree tempTree = mergeTrees(new AVLTree(tree1.root.rightChild), tree2);
            tree1.root.rightChild = tempTree.root;
            tempTree.root.parent = tree1.root;
            tree1.size += tree2.size;
            tempTree = null;
            tree1.rebalance(tree1.root);
            tree2 = null;
            return tree1;
        }

        AVLTree tempTree = mergeTrees(tree1, new AVLTree(tree2.root.leftChild));
        tree2.root.leftChild = tempTree.root;
        tempTree.root.parent = tree2.root;
        tempTree = null;
        tree2.size += tree1.size;
        tree2.rebalance(tree1.root);
        tree1 = null;
        return tree2;
    }

    public void inorderIt() {
        if(this.root == null)
            return;

        Stack<Node> stack = new Stack<>();
        Node currentNode = this.root;

        while(currentNode != null || stack.size() > 0) {

            while(currentNode != null) {
                stack.push(currentNode);
                currentNode = currentNode.leftChild;
            }

            currentNode = stack.pop();
            System.out.print(currentNode.key + " ");
            currentNode = currentNode.rightChild;
        }
        System.out.println();
    }

    private static Node[] splitTree(Node root, int splitPoint) {
        //TODO: Implement and debug this until it is completely working fine.

        Node[] result = new Node[] {null, null};

        if(root == null)
            return result;

        if(splitPoint < root.key) {
            result = splitTree(root.leftChild, splitPoint);
            Node mergedRoot = mergeWithRoot(result[1], root.rightChild, root);
            result[1] = mergedRoot;
            return result;
        }

       if(root.key < splitPoint) {
           result = splitTree(root.rightChild, splitPoint);
           Node mergedRoot = mergeWithRoot(result[0], root.leftChild, root);
           result[0] = mergedRoot;
           return result;
       }
       return result;
    }

    public AVLTree[] split(int splitPoint) {
        Node[] nodeResult = splitTree(this.root, splitPoint);
        AVLTree[] treeResult = new AVLTree[] {null, null};
        for(int i = 0; i < nodeResult.length; i++) {
                treeResult[i] = new AVLTree(nodeResult[i]);
        }

        return treeResult;
    }
}