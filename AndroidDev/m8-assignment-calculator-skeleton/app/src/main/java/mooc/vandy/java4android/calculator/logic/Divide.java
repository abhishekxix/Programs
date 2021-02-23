package mooc.vandy.java4android.calculator.logic;

/**
 * Perform the Divide operation.
 */
public class Divide {
    private int argumentOne = 0;
    private int argumentTwo = 0;

    public Divide(int argumentOne, int argumentTwo) {
        this.argumentOne = argumentOne;
        this.argumentTwo = argumentTwo;
    }

    public String toString() {
        if(argumentTwo == 0) {
            return "You can not divide by 0";
        }

        return String.valueOf(argumentOne / argumentTwo) + " R:" + String.valueOf(argumentOne % argumentTwo);
    }
}