package com.abhisheksingh;

public class Main {

    public static void main(String[] args) {
        Dog dog = new Dog("Rocky");

        dog.eat();
        dog.breathe();

        Bird birb  = new Parrot("Kiwi");
        birb.eat();
        birb.breathe();
        birb.fly();

        Bird bird  = new Penguin("TOTO");
        bird.eat();
        bird.breathe();
        bird.fly();
    }
}