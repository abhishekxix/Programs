package com.abhisheksingh;

public class Dog extends Animal {


    Dog(String name) {
        super(name);
    }

    @Override
    public void eat() {
        System.out.println(super.getName() + " is eating.");
    }

    @Override
    public void breathe() {
        System.out.println(super.getName() + " is breathing.");
    }
}
