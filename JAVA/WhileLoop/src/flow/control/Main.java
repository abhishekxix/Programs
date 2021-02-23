package flow.control;

public class Main {

    public static void main(String[] args) {
	    int count = 0;

	    while(count != 5) {
            System.out.println("The value of count is : " + count);
            count++;
        }

	    for(count = 1; count < 7; count++) {
            System.out.println("The value of count is : " + count);
        }

	    int number = 4;
	    int finishNumber = 20;

	    int countEvenNumbers = 0;
	    while(number <= finishNumber) {
            number++;
            if (!isEven(number)) {
                continue;
            }
            countEvenNumbers++;
            System.out.println("Even number : " + number);
            if(countEvenNumbers >= 5)
                break;
        }
    }

    public static boolean isEven(int num) {
        if(num % 2 == 0 && num > 0)
            return true;
        return false;
    }
}
