public class OperatorsChallenge {
    public static void main(String[] args) {
        double a = 20.00, b = 80.00;

        double result = (a + b) * 100;
        boolean flag = false;

        flag = (result % 40.00 == 0)? true : false;
        System.out.println(flag);
    }
}
