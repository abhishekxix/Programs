package com.abhisheksingh;


public class SearchTree implements NodeList {
    private ListItem root;

    public SearchTree(ListItem root) {
         this.root = root;
    }

    @Override
    public ListItem getRoot() {
        return this.root;
    }

    @Override
    public boolean addItem(ListItem item) {
       if(this.root == null) {
           this.root = item;
           return true;
       }

       ListItem current = this.root;
       int comparison = 0;

       while(current != null) {
           comparison = current.compareTo(item);
           if(comparison < 0) {
               //new item is greater
               if(current.next() != null) {
                   current = current.next();
               }
               else {
                   current.setNext(item);
                   return true;
               }
           }
           else if(comparison > 0) {
               //item is less than the current item
               if(current.previous() != null) {
                   current = current.previous();
               }
               else {
                   current.setPrevious(item);
                   return true;
               }
           }
           else {
               System.out.println(item.getValue() + " is already present in the tree.");
               return false;
           }
       }
       /*We can't actually get here but java complains if there is no return here.*/
       return false;
    }

    @Override
    public boolean removeItem(ListItem item) {
        return false;
    }

    @Override
    public void traverse(ListItem root) {
        //recursive traversal (DFS).
        if(root != null) {
            traverse(root.previous());
            System.out.println(root.getValue());
            traverse(root.next());
        }
    }
}
