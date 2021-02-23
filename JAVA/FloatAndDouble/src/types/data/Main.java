package types.data;

public class Main {

    public static void main(String[] args) {
        float f = (float) 5.25; //not recommended to do it like this. do f = 5.25f instead
        System.out.println("Minimum value of a float = " + Float.MIN_VALUE);
        System.out.println("Maximum value of a float = " + Float.MAX_VALUE);
        System.out.println("Minimum value of a double = " + Double.MIN_VALUE);
        System.out.println("Maximum value of a double = " + Double.MAX_VALUE);

        int intValue  = 5 / 2;
        float floatValue = 5f / 2f;
        double doubleValue = 5d / 2d;

        System.out.println("intValue : " + intValue);
        System.out.println("floatValue : " + floatValue);
        System.out.printf("doubleValue : %.4f\n", doubleValue);
        var abhishekSingh = "What is your name?";

        System.out.println(abhishekSingh);
    }
}
