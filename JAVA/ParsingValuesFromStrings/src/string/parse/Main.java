package string.parse;

public class Main {

    public static void main(String[] args) {
	    String numberAsString = "2020";
        System.out.println("numberAsString = " + numberAsString);
        int number = Integer.parseInt(numberAsString);
        double number2 = Double.parseDouble(numberAsString);
        System.out.println("Integer : " + number);
        System.out.println("Double : " + number2);
//        byte number3 = Byte.parseByte(numberAsString);
        short number4 = Short.parseShort(numberAsString);
        long number5 = Long.parseLong(numberAsString);
    }
}
