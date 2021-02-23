package method.overloading.java;

public class Main {

    public static void main(String[] args) {
        int score = 500;
        int newScore = calculateScore("Abhishek", score);
        System.out.printf("New score is : %d\n", newScore);
        calculateScore(newScore);
    }

    public static int calculateScore(String playerName, int score) {
        System.out.printf("Player %s scored %d points.\n", playerName, score);

        return (score * 1000);
    }
    public static void calculateScore(int score) {
        System.out.printf("Player scored %d points.\n", score);
    }
}

