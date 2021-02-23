package arraysandlists;

import java.util.ArrayList;

public class Main {

    public static void main(String[] args) {
        ArrayList<Integer> integerArrayList = new ArrayList<Integer>(/*Initial capacity of the array list*/);

        for(int i = 0; i < 10; i++) {
            integerArrayList.add(i);   //Autoboxing.
        }

        for(int i = 0; i < integerArrayList.size(); i++) {
            System.out.println("Value no. " + (i + 1) + " = " + integerArrayList.get(i));    //unboxing
        }

        /*int a = 0;
        Integer b = 0;
        a = b;  //unboxing
        b = a;  //autoboxing*/
    }
}
