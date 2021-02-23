public class SpeedConverter {
    public static long toMilesPerHour(double kilometersPerHour) {
        if(kilometersPerHour < 0)
            return -1;
        return Math.round(kilometersPerHour / 1.609);
    }
    public static void printConversion(double kilometersPerHour) {
        if(kilometersPerHour < 0)
            System.out.println("Invalid Value");
        long milesPerHour = toMilesPerHour(kilometersPerHour);
        System.out.printf("%f km/h = %d mi/h", kilometersPerHour, milesPerHour);
    }
}
