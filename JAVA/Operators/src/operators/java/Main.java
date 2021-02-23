package operators.java;

public class Main {

    public static void main(String[] args) {
	    var result  = 1 + 2;
        System.out.println(result);
        var previousResult = result;
        System.out.println(previousResult);
        result--;
        System.out.println(result);
        result *= 10;
        System.out.println(result);

        boolean isAlien = false;

        if(!isAlien && 1 > 0)
            System.out.println("It is not an alien");

        boolean isCar = true;

        if(isCar = true)    //because the thing that is assigned to a variable is returned after assignment
            System.out.println("It is a car");
    }
}
