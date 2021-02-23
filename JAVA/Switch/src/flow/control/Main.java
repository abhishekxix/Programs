package flow.control;

public class Main {

    public static void main(String[] args) {
        int value = 1;

        if(value == 1)
            System.out.println("Value was 1");
        else if(value == 2)
            System.out.println("Value was 2");
            else
                System.out.println("Value was not 1 or 2");

        int switchValue = 5;

        switch (switchValue) {
            case 1 :
                System.out.println("Value was 1");
                break;

            case 2 :
                System.out.println("Value was 2");
                break;

            case 3 :
            case 4 :
            case 5 :
                System.out.println("Value was either 3, 4 or 5");
                break;

            default :
                System.out.println("The value was not 1 or 2");
        }

        String montValue = "January";

        switch(montValue.toLowerCase()) {
            case "january" :
                System.out.println("January");
                break;

            case "june" :
                System.out.println("June");
                break;

            default :
                System.out.println("Not January or June");
        }
    }
}
