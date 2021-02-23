package arraysandlists;

import java.util.ArrayList;

public class Branch {

    private String branchName;
    private ArrayList<Customer> customers;

    public Branch(String branchName) {
        this.customers = new ArrayList</*Customer Writing it is optional here*/>();
        this.branchName = branchName;
    }

    public String getBranchName() {
        return this.branchName;
    }

    public boolean addCustomer(String nameOfTheCustomer, Double initialTransaction) {
        boolean isSuccessful;
        if(this.isPresent(nameOfTheCustomer) != -1)
            isSuccessful = false;

        else {
            this.customers.add(Customer.createCustomer(nameOfTheCustomer,
                    initialTransaction));
            isSuccessful = true;
        }

        return isSuccessful;
    }

    private int isPresent(String nameEntry) {
        for(int i = 0; i < this.customers.size(); i++)
            if(customers.get(i).getNameOfTheCustomer() == nameEntry)
                return i;

        return -1;
    }

    public boolean addTransactions(String nameOfTheCustomer, Double transactionAmount) {
        boolean isSuccessful;
        int customerIndex = this.isPresent(nameOfTheCustomer);
        if(customerIndex == -1)
            isSuccessful = false;

        else {
            this.customers.get(customerIndex).addTransaction(transactionAmount);
            isSuccessful = true;
        }

        return isSuccessful;
    }

    public void listCustomers(boolean isShowingTransactions) {
        if (this.customers.size() == 0) {
            System.out.println("No customers in the " + this.branchName + " branch");
            return;
        }

        System.out.println("There are currently " + this.customers.size() +
                " customers having an account in the " + this.branchName + " branch.\n" +
                "The list is as under :\n");
        if(isShowingTransactions) {
            for(int i = 0; i < this.customers.size(); i++) {
                System.out.println((i + 1) + ". Name : " + this.customers.get(i).getNameOfTheCustomer());
                this.customers.get(i).displayTransactions();
            }
        }
        else {
            for(int i = 0; i < this.customers.size(); i++)
                System.out.println((i + 1) + ". Name : " + this.customers.get(i).getNameOfTheCustomer());
        }
    }

    public static Branch createBranch(String branchName) {
        return (new Branch(branchName));
    }
}
