package encapsulation;

public class Main {

    public static void main(String[] args) {
	    Printer laserPrinter = new Printer("My Printer", 100, true);

	    laserPrinter.printPages(20);
	    laserPrinter.refillToner(100);
	    laserPrinter.printPages(50);

        System.out.println("The toner percentage left in the printer is : " +
                    laserPrinter.getTonerLevel() + " and " + laserPrinter.getNumberOfPapersPrinted()
                    + " pages have been printed so far by this printer.");
        laserPrinter.refillToner(11000);
    }
}
