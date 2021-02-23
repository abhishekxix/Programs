package arraysandlists;

import java.util.ArrayList;

public class Main {

	public static void main(String[] args) {
		Customer customer = new Customer("Abhishek", 54928.0);
		Customer anotherCustomer = customer;
		anotherCustomer.setBalance(200);

		System.out.println("Balance for " +customer.getName() + " = " + customer.getBalance());

        ArrayList<Integer> intList = new ArrayList<>();
        intList.add(1);
        intList.add(3);
        intList.add(4);

        for(int i = 0; i < intList.size(); i++) {
            System.out.println(i + ". " + intList.get(i));
        }

        intList.add(1, 2);

//        for(int i = 0; i < intList.size(); i++) {
            System.out.println(intList);
//        }

    }
}
