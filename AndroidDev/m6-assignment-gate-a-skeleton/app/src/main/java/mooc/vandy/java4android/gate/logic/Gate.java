package mooc.vandy.java4android.gate.logic;

/**
 * This file defines the Gate class.
 */
public class Gate {
    // TODO -- Fill in your code here
    public static final int IN = 1;
    public static final int OUT = -1;
    public static final int CLOSED = 0;
    private int mSwing;

    public boolean setSwing(int direction) {
        mSwing = direction;
        return true;
    }

    public boolean open(int direction) {
        if(!(direction == IN || direction == OUT))
            return false;
        return setSwing(direction);
    }

    public void close() {
        mSwing = CLOSED;
    }

    public int getSwingDirection() {
        return mSwing;
    }

    public int thru(int count) {
        if(mSwing == IN)
            return count;

        if(mSwing == OUT)
            return -count;

        return 0;
    }

    @Override
    public String toString() {
        String response;

        if(mSwing == CLOSED)
            response = "This gate is closed";
        else if(mSwing == IN)
            response = "This gate is open and swings to enter the pen only";
        else if(mSwing == OUT)
            response = "This gate is open and swings to exit the pen only";
        else
            response = "This gate has an invalid swing direction";

        return response;
    }
}
