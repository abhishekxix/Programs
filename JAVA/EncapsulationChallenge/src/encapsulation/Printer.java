package encapsulation;

public class Printer {

    private String nameOfThePrinter;
    private int numberOfPapersPrinted;
    private int tonerLevel = 100;
    private boolean isDuplex;

    Printer(String nameOfThePrinter, int tonerLevel, boolean isDuplex) {
        this.nameOfThePrinter = nameOfThePrinter;
        if(tonerLevel > 0 && tonerLevel <= 100)
            this.tonerLevel = tonerLevel;

        this.numberOfPapersPrinted = 0;
        this.isDuplex = isDuplex;
    }

    public int getNumberOfPapersPrinted() {
        return this.numberOfPapersPrinted;
    }
    public int getTonerLevel() {
        return  this.tonerLevel;
    }


    public void refillToner(int percentage) {
        if(percentage > 0 && percentage <= 100)
            this.tonerLevel = percentage;
        else
            System.out.println("Invalid refill amount...");
    }

    public void printPages(int numberOfPages) {
        if(this.isDuplex)
            if(tonerLevel >= 2 * numberOfPages) {
                numberOfPapersPrinted +=  2 * numberOfPages;
                tonerLevel  -= 2 * numberOfPages;
            }
            else {
                System.out.println("Not enough tonerLevel.. you can print : "
                + this.tonerLevel / 2 + " page(s)");
                return;
            }

        else {
            if(tonerLevel >= numberOfPages) {
                numberOfPapersPrinted += numberOfPages;
                tonerLevel  -= numberOfPages;
            }
            else {
                System.out.println("Not enough tonerLevel.. you can print : "
                        + this.tonerLevel + " page(s)");
            }
        }
    }
}
