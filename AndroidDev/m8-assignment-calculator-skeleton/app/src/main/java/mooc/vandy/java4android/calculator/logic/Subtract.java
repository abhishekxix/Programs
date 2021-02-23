package mooc.vandy.java4android.calculator.logic;

/**
 * Perform the Subtract operation.
 */
public class Subtract {
    private int argumentOne = 0;
    private int argumentTwo = 0;

    public Subtract(int argumentOne, int argumentTwo) {
        this.argumentOne = argumentOne;
        this.argumentTwo = argumentTwo;
    }

    public String toString() {
        return String.valueOf(argumentOne - argumentTwo);
    }
}