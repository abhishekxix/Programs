package mooc.vandy.java4android.calculator.logic;

/**
 * Perform the Multiply operation.
 */
public class Multiply {
    private int argumentOne = 0;
    private int argumentTwo = 0;

    public Multiply(int argumentOne, int argumentTwo) {
        this.argumentOne = argumentOne;
        this.argumentTwo = argumentTwo;
    }

    public String toString() {
        return String.valueOf(argumentOne * argumentTwo);
    }
}