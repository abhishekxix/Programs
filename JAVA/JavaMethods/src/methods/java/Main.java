package methods.java;

public class Main {

    public static void main(void) {
        int score = 800;
        int levelCompleted = 5;
        int bonus = 100;

        int finalScore = calculateScore(true, score, levelCompleted, bonus);

        System.out.println("\nfinalScore : " + finalScore);

        int positionInTable = MethodsChallenge.calculateHighScore(score);
        MethodsChallenge.displayHighScore("Abhishek", positionInTable);
    }
    
    public static int calculateScore(boolean gameOver, int score, int levelCompleted, int bonus) {
        int finalScore = 0;
        if(gameOver)
           finalScore = score + (levelCompleted * bonus);
        else
            finalScore = -1;

        return finalScore;
    }
}