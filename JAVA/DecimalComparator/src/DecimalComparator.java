public class DecimalComparator {

    public static boolean areEqualByThreeDecimalPlaces(double firstNumber, double secondNumber) {
        firstNumber = (long) (firstNumber * 1000);
        secondNumber = (long) (secondNumber * 1000);

        boolean areEqual = false;
        if(firstNumber == secondNumber)
                areEqual = true;
        return areEqual;
    }
}
