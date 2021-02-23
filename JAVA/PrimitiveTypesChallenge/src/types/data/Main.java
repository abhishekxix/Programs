package types.data;

public class Main {

    public static void main(String[] args) {
        int integer = 45000;
        short shortInteger = 3454;
        byte byteInteger = 27;

        long resultOfValues = (integer + shortInteger + byteInteger) * 10L;

        System.out.println(resultOfValues);
        System.out.printf("");
    }
}
