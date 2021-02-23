package com.abhisheksingh;

public class Penguin extends Bird {

    public Penguin(String name) {
        super(name);
    }

    @Override
    public void fly() {
        System.out.println(this.getName() + " is unable to fly.");
    }
}
