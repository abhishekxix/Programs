package com.abhisheksingh;

import java.util.ArrayList;
import java.util.Collections;

public class Theatre {
    private final String nameOfTheTheatre;
    private final int numRows;
    private final int seatsPerRow;
    private ArrayList<Seat> seats;

    public Theatre(String nameOfTheTheatre) {
        this.nameOfTheTheatre = nameOfTheTheatre;
        this.seatsPerRow = 12;
        this.numRows = 12;
        this.seats = new ArrayList<Seat>();

        for(char i = 'A'; i <= 'A' + numRows - 1; i++) {
            for(int j = 1; j <= seatsPerRow; j++) {
                this.seats.add(new Seat(i + String.format("%02d", j)));
            }
        }
    }

    public boolean reserveSeat(String seatNumber) {
       Seat requestedSeat = new Seat(seatNumber);
       int foundSeat = Collections.binarySearch(seats, requestedSeat, null);
        if(foundSeat >= 0) {
            return seats.get(foundSeat).reserveSeat();
        }

        System.out.println("There is no seat " + seatNumber);
        return false;
    }

    public void printSeats() {
        System.out.println();
        for(var seat : seats) {
            System.out.println(seat.getSeatNumber());
        }
    }

    private static final class Seat implements Comparable<Seat> {
        private final String seatNumber;
        private boolean isReserved;

        private Seat(String seatNumber) {
            this.seatNumber = seatNumber;
            this.isReserved = false;
        }

        @Override
        public int compareTo(Seat o) {
            return seatNumber.compareToIgnoreCase(o.seatNumber);
        }

        private boolean reserveSeat() {
            if(!isReserved) {
                isReserved = true;
                return true;
            }
            else {
                return false;
            }
        }

        private boolean cancel() {
           if(isReserved) {
               isReserved = false;
               return true;
           }
           else {
               return false;
           }
        }

        private String getSeatNumber() {
            return seatNumber;
        }

    }
}
