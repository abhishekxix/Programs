package com.abhisheksingh;

public class Main {

    public static void main(String[] args) {
        Theatre theatre = new Theatre("The Great cinema hall");
        theatre.printSeats();
        theatre.reserveSeat("L01");
        theatre.reserveSeat("L01");

    }
}
