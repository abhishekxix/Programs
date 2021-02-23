package com.abhisheksingh;

public class Main {

    public static void main(String[] args) {
	    Account abhisheksAccount = new Account("Abhishek Singh");
	    abhisheksAccount.deposit(10000);
	    abhisheksAccount.withdraw(500);
        abhisheksAccount.deposit(-1000);
        abhisheksAccount.withdraw(-500);

        System.out.println("The account balance is : " + abhisheksAccount.getBalance());
        System.out.println(22.0/7.0);
        Apple ap = Apple.GoldenDel;
        System.out.println(ap);
    }
}
