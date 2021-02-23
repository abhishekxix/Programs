package com.abhisheksingh;

import java.util.ArrayList;

public class Account {
    private String accountName;
    private double balance;
    private ArrayList<Double> transactions;

    {
        System.out.println("Initializer Block 2 called");
    }

    {
        System.out.println("Initializer Block called");
    }


    public Account(String accountName) {
        this.accountName = accountName;
        this.transactions = new ArrayList<>();
        this.balance = 0.0;
    }

    public double getBalance() {
        return balance;
    }

    public void deposit(double amount) {
        if(amount > 0.0) {
            transactions.add(amount);
            balance += amount;
            System.out.println(amount + " deposited successfully. The balance is now : " + balance);
        }
        else {
            System.out.println("Cannot deposit negative amount.");
        }
    }

    public void withdraw(double amount) {
        if(amount < 0.0 && (balance - amount < 0.0)) {
            System.out.println("Cannot withdraw the amount.");
        }
        else {
            transactions.add(-amount);
            balance -= amount;
            System.out.println(amount + " withdraw successful. The balance is now : " + balance);
        }
    }
}
