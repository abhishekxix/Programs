package com.abhisheksingh;

public class DeskPhone implements ITelephone {

    private int myNumber;
    private boolean isRinging;

    public DeskPhone(int myNumber) {
        this.myNumber = myNumber;
    }

    @Override
    public void powerOn() {
//        System.out.println("No action taken. Desk phone does not have a on button.");
    }

    @Override
    public void dial(int phoneNumber) {
        System.out.println("Now ringing.");
    }

    @Override
    public void answer() {
        if(this.isRinging) {
            System.out.println("Answering the desk phone.");
            this.isRinging = false;
        }
    }

    @Override
    public boolean callPhone(int phoneNumber) {
        if(phoneNumber == this.myNumber) {
            this.isRinging = true;
            System.out.println("Ring Ring");
        }
        else {
            this.isRinging = false;
        }

        return this.isRinging;
    }

    @Override
    public boolean isRinging() {
        return this.isRinging;
    }
}
