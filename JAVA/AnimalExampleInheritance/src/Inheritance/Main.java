package Inheritance;

public class Main {

    public static void main(String[] args) {
	    Animal animal = new Animal(1, 1, 34, 57, "Animal");

	    Dog dog = new Dog(21, 34, "German Shephard", 2, 4, 1, 32, "long");

	    dog.eat();
	    dog.walk();
	    dog.run();
    }
}
