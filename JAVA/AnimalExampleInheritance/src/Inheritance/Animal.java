package Inheritance;

public class Animal {

    private int brain;
    private int body;
    private int size;
    private int weight;
    private String name;

    public Animal(int brain, int body, int size, int weight, String name) {
        this.brain = brain;
        this.body = body;
        this.size = size;
        this.weight = weight;
        this.name = name;
    }

    public void move(int speed) {
        System.out.println("Animal is moving at speed " + speed);
    }

    public void eat() {
        System.out.println("Animal.eat() called");
    }

    public int getBody() {
        return body;
    }

    public int getSize() {
        return size;
    }

    public int getWeight() {
        return weight;
    }

    public String getName() {
        return name;
    }

    public int getBrain() {
        return brain;
    }
}
