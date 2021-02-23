package method.overloading.java;

public class Main {

    private static final String INVALID_VALUE_MESSAGE = "Inavlid value";
    public static void main(String[] args) {
        System.out.println(getDurationString(420L, 45L));
        System.out.println(getDurationString(300L));
    }

    private static String getDurationString(long minutes, long seconds) {
        if((minutes < 0L) || (seconds > 59L) || (seconds < 0L))
            return INVALID_VALUE_MESSAGE;
        long hours = minutes / 60;
        minutes = minutes % 60;

        String hourString = "";
        hourString += hours + "h ";

        String minuteString = "";
        minuteString += minutes + "m ";

        String secondsString = "";
        secondsString += seconds + "s";

        if(hours < 10)
            hourString = "0" + hourString;
        if(minutes < 10)
            minuteString = "0" + minuteString;
        if(seconds < 10)
            secondsString = "0" + secondsString;
        String timeString = hourString + minuteString + secondsString;

        return timeString;
    }
    private static String getDurationString(long seconds) {
        if (seconds < 0L)
            return INVALID_VALUE_MESSAGE;

        long minutes = seconds / 60L;
        seconds %= 60L;

        return getDurationString(minutes, seconds);
    }
}
