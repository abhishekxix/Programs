public class MinutesToYearsDaysCalculator {

    public static final long MINUTES_IN_A_YEAR = 525600;
    public static final long MINUTES_IN_A_DAY = 1440;

    public static void printYearsAndDays(long minutes) {
        if(minutes < 0) {
            System.out.println("Invalid Value");
            return;
        }
        long years = minutes / MINUTES_IN_A_YEAR;
        long newMinutes = minutes % MINUTES_IN_A_YEAR;
        long days = newMinutes / MINUTES_IN_A_DAY;

        System.out.println(minutes + " min = " + years + " y and " + days + " d");
    }
}
