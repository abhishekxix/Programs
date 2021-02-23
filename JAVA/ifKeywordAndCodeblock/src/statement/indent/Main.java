package statement.indent;

public class Main {

    public static void main(String[] args) {    /*This is the start of the main method.*/
	    boolean gamOver = true;
	    int score = 500;
	    int levelCompleted = 5;
	    int bonus = 100;
	    if(score == 5000)
            System.out.println("Your score was 5000");
	    else if(score > 1000)
            System.out.println("The score was less than 5000 but greater than 1000");
	    else
			System.out.println("Got here.");
    }
}