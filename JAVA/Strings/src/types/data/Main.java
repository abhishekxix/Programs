package types.data;

public class Main {

    public static void main(String[] args) {
        String myString = "This is a String";
        System.out.println("myString : " + myString);

        myString += ", and this is more";
        System.out.println("myString : " + myString);
        myString += "\u00A9 2020";
        System.out.println("myString : " + myString);
        String numberString = "250.55";
        numberString += "49.95";
        System.out.println("numberString : " + numberString);
        String lastString = "10";
        int myInt = 50;
        lastString += myInt;
        System.out.println("lastString : " + lastString);
    }
}
