package OOP;

public class DeluxeHamburger extends HamBurger {

    private String chips;
    private double chipsPrice;
    private String coldDrink;
    private double coldDrinkPrice;
    private static final int type = 3;

    public int getType() {
        return type;
    }

    public DeluxeHamburger(String name, String breadRollType, String meat, double price, double chipsPrice, double coldDrinkPrice) {
        super(name, breadRollType, meat, price);
        this.chipsPrice = chipsPrice;
        this.coldDrinkPrice = coldDrinkPrice;
        super.incrementPrice(chipsPrice);
        super.incrementPrice(coldDrinkPrice);
        this.chips = "Chips";
        this.coldDrink = "Cold Drink";
    }


    @Override
    public void showInvoice() {
        System.out.println("\nThe base price of your order " + this.getName() +
                " = " + this.getPrice() + "\nThe additions are as follows :\n");

        System.out.println("Addition name = " + this.chips +
                "\nAddition price = " + this.chipsPrice);

        System.out.println("\nAddition name = " + this.coldDrink +
                "\nAddition price = " + this.coldDrinkPrice);

        System.out.println("The total price of the order = " + super.getFinalPrice());
    }

    @Override
    public void setAddition1(String addition1Name, double addition1Price) {
        System.out.println("Can't make additions to the Deluxe Hamburger.");
    }

    @Override
    public void setAddition2(String addition2Name, double addition2Price) {
        System.out.println("Can't make additions to the Deluxe Hamburger.");
    }

    @Override
    public void setAddition3(String addition3Name, double addition3Price) {
        System.out.println("Can't make additions to the Deluxe Hamburger.");
    }

    @Override
    public void setAddition4(String addition4Name, double addition4Price) {
        System.out.println("Can't make additions to the Deluxe Hamburger.");
    }

}
