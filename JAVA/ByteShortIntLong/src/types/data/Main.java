package types.data;

public class Main {

    public static void main(String[] args) {
        int myValue = 10_000;
        int myMinIntValue = Integer.MIN_VALUE;
        int myMaxIntValue = Integer.MAX_VALUE;
        System.out.println("Integer minimum value = " + myMinIntValue + "\nInteger Maximum value = " + myMaxIntValue);
        System.out.println("Busted MAX value = " + (myMaxIntValue + 1));    //integer overflow
        System.out.println("Busted MAX value = " + (myMinIntValue - 1));    //integer underflow

        byte myMinByteValue = Byte.MIN_VALUE;
        byte myMaxByteValue = Byte.MAX_VALUE;

        System.out.println("Byte minimum value = " + myMinByteValue + "\nByte Maximum value = " + myMaxByteValue);

        short myMinShortValue = Short.MIN_VALUE;
        short myMaxShortValue = Short.MAX_VALUE;

        System.out.println("Short minimum value = " + myMinShortValue + "\nShort Maximum value = " + myMaxShortValue);

        long n = 100L;

        byte myNewByteValue = (byte) (myMinByteValue / 2);

        short myNewShortValue = (short) (myMinShortValue / 2);
        System.out.printf("%d %d", myNewByteValue, myNewShortValue);
    }
}
