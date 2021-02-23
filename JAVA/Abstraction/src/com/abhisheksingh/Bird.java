package com.abhisheksingh;

public abstract class Bird extends Animal implements CanFLy {

    public Bird(String name) {
        super(name);
    }


    @Override
    public void eat() {
        System.out.println(super.getName() + " is pecking.");
    }

    @Override
    public void breathe() {
        System.out.println(super.getName() + " is breathing.");
    }

    @Override
    public void fly() {
        System.out.println(this.getName() + " is flapping its wings.");
    }
}
