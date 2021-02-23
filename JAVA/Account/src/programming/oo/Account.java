package  programming.oo;

public class Account {
    private String accountNumber;
    private double accountBalance;
    private String name;
    private String emailAddress;
    private String phoneNumber;

    public Account() {
        this("UNNAMED", "NOT AVAILABLE",
                0.0); // delegating constructors
        System.out.println("\nEmpty constructor called.");
    }

    public Account(String name, String accountNumber, double accountBalance) {
        this.name = name;
        this.accountBalance = accountBalance;
        this.accountNumber = accountNumber;

        System.out.println("\nParameterized constructor called.");
    }


    public void setAccountBalance(double accountBalance) {
        this.accountBalance = accountBalance;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setAccountNumber(String accountNumber) {
        this.accountNumber = accountNumber;
    }

    public void setEmailAddress(String emailAddress) {
        this.emailAddress = emailAddress;
    }

    public void setPhoneNumber(String phoneNumber) {
        if(phoneNumber.length() > 10)
            return;
        this.phoneNumber = phoneNumber;
    }

    public String getName() {
        return this.name;
    }

    public String getEmailAddress() {
        return emailAddress;
    }

    public String getPhoneNumber() {
        return this.phoneNumber;
    }

    public double getAccountBalance() {
        return this.accountBalance;
    }

    public String getAccountNumber() {
        return this.accountNumber;
    }

    public boolean depositFund(double amount) {
        if(amount < 0)
            return false;
        this.accountBalance += amount;
        return true;
    }

    public boolean withdrawFund(double amount) {
        if(amount < 0 || accountBalance - amount < 0)
            return false;
        this.accountBalance -= amount;
        return true;
    }
}
