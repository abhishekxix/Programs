package encapsulation;

public class Main {

    public static void main(String[] args) {

//        Player player = new Player();
//        player.name = "Abhishek Singh";
//        player.health = 100;
//        player.weapon = "AK-47";
//
//        player.health = 200;
//        player.loseHealth(100);
//        System.out.println("Health remaining : " + player.getHealth());

        EnhancedPlayer player = new EnhancedPlayer("Abhishek", 100, "AK-47");
        System.out.println("The health of the player is : " + player.getHealth());
        player.loseHealth(100);
        System.out.println("The health of the player is : " + player.getHealth());
    }
}
