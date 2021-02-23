package com.abhisheksingh;

public class MyLinkedList implements NodeList {

    private ListItem root;

    public MyLinkedList(ListItem root) {
        this.root = root;
    }

    @Override
    public ListItem getRoot() {
        return this.root;
    }

    @Override
    public boolean addItem(ListItem item) {
       if(this.root == null) {
           //The list is empty
           root = item;
           return true;
       }
       ListItem currentItem = this.root;

       while(currentItem != null) {
           int comparison = currentItem.compareTo(item);

           if(comparison < 0) {
               if(currentItem.next() != null)
                    currentItem = currentItem.next();
               else {
                   //there is no next, so insert the item here.
                   currentItem.setNext(item);
                   item.setPrevious(currentItem);
                   return true;
               }
           }
           else if(comparison > 0) {
               //item is less than the currentItem
               if(currentItem.previous() != null) {
                   currentItem.previous().setNext(item);
                   item.setPrevious(currentItem.previous());
                   currentItem.setPrevious(item);
               }
               else {
                   //the node without previous is the node
                   item.setNext(this.root);
                   this.root.setPrevious(item);
                   this.root = item;
               }
               return  true;
           }
           else {
               System.out.println(item.getValue() + " is already present in the list.");
               return false;
           }
       }
       return false;
    }

    @Override
    public boolean removeItem(ListItem item) {
        if(item != null && this.root != null) {
            System.out.println("Deleting : " + item.getValue());

            ListItem current = this.root;

            while(current != null) {
                int comparison = current.compareTo((item));
                if(comparison == 0) {
                    if(current == root) {
                        this.root = current.next();
                    }
                    else {
                        current.previous().setNext(current.next());
                        if(current.next() != null) {
                            current.next().setPrevious(current.previous());
                        }
                    }
                    return true;
                }
                if(comparison < 0) {
                    current = current.next();
                }
                if(comparison > 0) {
                    System.out.println(item.getValue() + " does not exist in the list.");
                    return false;
                }
            }
        }
        System.out.println("Unable to delete : " + item.getValue());
        return false;
    }

    @Override
    public void traverse(ListItem root) {
        if(this.root == null) {
            System.out.println("The list is empty");
            return;
        }
        ListItem temp = this.root;
        while(temp != null) {
            System.out.println(temp.getValue());
            temp = temp.next();
        }
    }
}
