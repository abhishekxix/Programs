package encapsulation;

public class Player {

    public String name;
    public int health;
    public String weapon;

    public void loseHealth(int damage) {
        if(damage < 0)
            return;
        this.health -= damage;

        if(this.health <= 0)
            System.out.println("Player knocked out.");  //also reduce the number of remaining lives of the player.
    }

    public int getHealth() {
        return this.health;
    }
}
