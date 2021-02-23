package mooc.vandy.java4android.calculator.logic;

/**
 * Perform the Add operation.
 */
public class Add {
    private int argumentOne = 0;
    private int argumentTwo = 0;

    public Add(int argumentOne, int argumentTwo) {
        this.argumentOne = argumentOne;
        this.argumentTwo = argumentTwo;
    }

    public String toString() {
        return String.valueOf(this.argumentOne + this.argumentTwo);
    }
}