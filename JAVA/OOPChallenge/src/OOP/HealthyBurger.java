package OOP;

public class HealthyBurger extends HamBurger {
    private String addition5Name;
    private double addition5Price;

    private String addition6Name;
    private double addition6Price;

    private static final int type = 2;

    public int getType() {
        return type;
    }

    HealthyBurger(String name, String meat, double price) {
        super(name, "Brown rye bread roll", meat, price);
    }

    public void setAddition5(String addition5Name, double addition5Price) {
        this.addition5Name = addition5Name;
        this.addition5Price = addition5Price;
        super.incrementPrice(this.addition5Price);
    }

    public void setAddition6(String addition6Name, double addition6Price) {
        this.addition6Name = addition6Name;
        this.addition6Price = addition6Price;
        super.incrementPrice(this.addition6Price);
    }
    
    @Override
    public void showInvoice() {
        if(addition5Name != null)
            System.out.println("\nName of the addition = " + this.addition5Name +
                    "\nPrice = " + this.addition5Price);

        if(addition6Name != null)
            System.out.println("\nName of the addition = " + this.addition6Name +
                    "\nPrice = " + this.addition6Price);
        super.showInvoice();
    }
}
