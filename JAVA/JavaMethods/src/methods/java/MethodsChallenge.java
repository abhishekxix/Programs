package methods.java;

public class MethodsChallenge {
    public static void displayHighScore(String name, int position) {
        System.out.println(name + " managed to get into position " + position + " on the high score table.");
    }

    public static int calculateHighScore(int score) {
        int position = -1;

        if(score > 1000)
            position = 1;
        if(score > 500 && score <= 1000)
            position = 2;
        if(score > 100 && score <= 500)
            position = 3;
        else
            position = 4;

        return position;
    }
}
