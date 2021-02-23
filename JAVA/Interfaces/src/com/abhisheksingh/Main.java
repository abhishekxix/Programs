package com.abhisheksingh;

public class Main {

    public static void main(String[] args) {
        ITelephone abhisheksPhone;  //It can also be instantiated.
        abhisheksPhone = new DeskPhone(1234567890);
        abhisheksPhone.powerOn();
        abhisheksPhone.callPhone(1234567890);

        abhisheksPhone = new MobilePhone(24323);
        abhisheksPhone.powerOn();
        abhisheksPhone.callPhone(24323);
    }
}