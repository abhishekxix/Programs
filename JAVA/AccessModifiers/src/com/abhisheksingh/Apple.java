package com.abhisheksingh;

public enum Apple {
    Jonathan(10.0), GoldenDel(9), RedDel(8), Winesap(7), Cortland(6);
    //the value in enum can be of any type
    private final double price;

    Apple(double price) {
        this.price = price;
    }
    public double getPrice() {
        return price;
    }
}
