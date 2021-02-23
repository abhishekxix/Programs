public class EqualSumChecker {

    public static boolean hasEqualSum(int first, int second, int third) {
        boolean isEqual = false;
        if(third == (first + second))
            isEqual = true;
        return isEqual;
    }
}
