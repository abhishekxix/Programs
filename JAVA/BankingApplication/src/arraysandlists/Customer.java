package arraysandlists;

import java.util.ArrayList;

public class Customer {

    private String nameOfTheCustomer;
    private ArrayList<Double> transactions;

    public Customer(String nameOfTheCustomer, Double initialTransaction) {
        this.nameOfTheCustomer = nameOfTheCustomer;
        this.transactions = new ArrayList<Double>();
        this.transactions.add(initialTransaction);
    }

    public String getNameOfTheCustomer() {
        return this.nameOfTheCustomer;
    }

    public void addTransaction(Double amount) {
        this.transactions.add(amount);
    }

    public void displayTransactions() {
        System.out.print("Transactions for " + this.nameOfTheCustomer + " :\n[ ");
        for(int i = 0; i < this.transactions.size(); i++) {
            System.out.print(this.transactions.get(i));

            if(i != this.transactions.size() - 1)
                System.out.print(", ");
            else
                System.out.print(" ");
        }
        System.out.println("]\n");
    }

    public static Customer createCustomer(String nameOfTheCustomer, Double initialTransaction) {
        return (new Customer(nameOfTheCustomer, initialTransaction));
    }
}
