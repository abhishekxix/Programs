package programming.oo;

public class VipPerson {
    private String name;
    private double creditLimit;
    private String emailAddress;

    public VipPerson() {
        this("Unnamed", 0.0,
                "NO EMAIL ADDRESS AVAILABLE");
    }

    public VipPerson(String name, double creditLimit) {
        this(name, creditLimit,
                "NO EMAIL ADDRESS AVAILABLE");
    }

    public VipPerson(String name, double creditLimit, String emailAddress) {
        this.name = name;
        this.creditLimit = creditLimit;
        this.emailAddress = emailAddress;
    }

    public String getName() {
        return name;
    }

    public double getCreditLimit() {
        return creditLimit;
    }

    public String getEmailAddress() {
        return emailAddress;
    }
}
