public class PlayingCat {

    public static boolean isCatPlaying(boolean summer, int temperature) {
        boolean playStatus = false;

        if(summer) {
            if(temperature >= 25 && temperature <= 45)
                playStatus = true;
        }
        else if(temperature >= 25 && temperature <= 35)
                playStatus = true;

        return playStatus;
    }
}
