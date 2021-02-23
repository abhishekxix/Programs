package OOP;

public class HamBurger {

    private String name;
    private String breadRollType;
    private String meat;
    private double price;
    private double finalPrice;

    private String addition1Name;
    private double addition1Price;

    private String addition2Name;
    private double addition2Price;

    private String addition3Name;
    private double addition3Price;

    private String addition4Name;
    private double addition4Price;

    private static final int type = 1;

    public int getType() {
        return type;
    }

    HamBurger(String name, String breadRollType, String meat, double price) {
        this.name = name;
        this.breadRollType = breadRollType;
        this.meat = meat;
        this.price = price;
        this.finalPrice = price;
    }

    public void setAddition1(String addition1Name, double addition1Price) {
        this.addition1Name = addition1Name;
        this.addition1Price = addition1Price;
        this.incrementPrice(addition1Price);
    }

    public void setAddition2(String addition2Name, double addition2Price) {
        this.addition2Name = addition2Name;
        this.addition2Price = addition2Price;
        this.incrementPrice(addition2Price);
    }

    public void setAddition3(String addition3Name, double addition3Price) {
        this.addition3Name = addition3Name;
        this.addition3Price = addition3Price;
        this.incrementPrice(addition3Price);
    }

    public void setAddition4(String addition4Name, double addition4Price) {
        this.addition4Name = addition4Name;
        this.addition4Price = addition4Price;
        this.incrementPrice(addition4Price);
    }

    protected void incrementPrice(double byAmount) {
        this.finalPrice += byAmount;
    }

    public void showInvoice() {
        System.out.println("\nThe base price of your order " + this.name +
                " = " + this.price + "\nThe additions are as follows :\n");
        
        if(addition1Name != null)
            System.out.println("Name of the addition = " + this.addition1Name +
                    "\nPrice = " + this.addition1Price);
        
        if(addition2Name != null)
            System.out.println("\nName of the addition = " + this.addition2Name +
                    "\nPrice = " + this.addition2Price);
        
        if(addition3Name != null)
            System.out.println("\nName of the addition = " + this.addition3Name +
                    "\nPrice = " + this.addition3Price);
        
        if(addition4Name != null)
            System.out.println("\nName of the addition = " + this.addition4Name +
                    "\nPrice = " + this.addition4Price);

        System.out.println("The final price of the order = " + this.finalPrice);
    }

    public String getName() {
        return this.name;
    }

    public double getPrice() {
        return this.price;
    }

    public double getFinalPrice() {
        return this.finalPrice;
    }
}
