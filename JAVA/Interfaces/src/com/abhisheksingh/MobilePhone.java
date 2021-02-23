package com.abhisheksingh;

public class MobilePhone implements ITelephone {

    private int myNumber;
    private boolean isRinging;
    private boolean isOn;

    public MobilePhone(int myNumber) {
        this.myNumber = myNumber;
        this.isOn = false;
    }

    @Override
    public void powerOn() {
        this.isOn = true;
        System.out.println("Mobile phone turned on");
    }

    @Override
    public void dial(int phoneNumber) {
        if(this.isOn)
            System.out.println("Now ringing " + phoneNumber + " on mobile phone");
        else
            System.out.println("Phone is switched off.");
    }

    @Override
    public void answer() {
        if(this.isRinging) {
            System.out.println("Answering the mobile phone.");
            this.isRinging = false;
        }
    }

    @Override
    public boolean callPhone(int phoneNumber) {
        if(phoneNumber == this.myNumber && isOn) {
            this.isRinging = true;
            System.out.println("Ring Ring");
        }
        else {
            this.isRinging = false;
            System.out.println("error");
        }

        return this.isRinging;
    }

    @Override
    public boolean isRinging() {
        return this.isRinging;
    }
}
