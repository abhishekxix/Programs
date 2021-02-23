package flow.control;

public class Main {

    public static void main(String[] args) {
        int number = 25;
        System.out.println("The sum of digits of " + number +
                " : " + sumDigits(number));
    }

    public static int sumDigits(int number) {
     if(number < 10)
         return -1;
     int sum = 0;
     while(number > 0) {
         sum += number % 10;
         number /= 10;
     }

     return sum;
    }
}
