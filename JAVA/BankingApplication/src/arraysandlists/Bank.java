package arraysandlists;

import java.util.ArrayList;

public class Bank {
    private String bankName;
    private ArrayList<Branch> branches;

    public Bank(String bankName) {
        this.bankName = bankName;
        this.branches = new ArrayList<>();
    }

   public boolean addCustomerToBranch(String branchName, String customerName, Double initialTransaction) {
        boolean isSuccessful = false;
        int branchIndex = isPresent(branchName);
        if(branchIndex >= 0) {
            branches.get(branchIndex).addCustomer(customerName, initialTransaction);
            isSuccessful = true;
        }
        return isSuccessful;
   }

   public boolean addTransactionForCustomer(String branchName, String customerName, double transactionAmount) {
        boolean isSuccessful = false;
        int branchIndex = isPresent(branchName);
        if(branchIndex >= 0) {
            isSuccessful = branches.get(branchIndex).addTransactions(customerName,transactionAmount);
        }
        return isSuccessful;
   }

    public boolean addBranch(String nameOfTheBranch) {
        boolean isSuccessful;
        if(this.isPresent(nameOfTheBranch) != -1)
            isSuccessful = false;

        else {
            this.branches.add(Branch.createBranch(nameOfTheBranch));
            isSuccessful = true;
        }

        return isSuccessful;
    }

    private int isPresent(String nameEntry) {
        for(int i = 0; i < this.branches.size(); i++)
            if(branches.get(i).getBranchName() == nameEntry)
                return i;

        return -1;
    }

    public void displayCustomers(String branchName) {
        int branchIndex = isPresent(branchName);
        if(branchIndex >= 0) {
            branches.get(branchIndex).listCustomers(false);
        }
        else
            System.out.println("Branch not found.");
    }
    public void displayCustomersWithTransactions(String branchName) {
        int branchIndex = isPresent(branchName);
        if(branchIndex >= 0) {
            branches.get(branchIndex).listCustomers(true);
        }
        else
            System.out.println("Branch not found.");
    }
}
