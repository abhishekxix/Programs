package com.abhisheksingh;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;

public class Theatre {
    private final String nameOfTheTheatre;
    private final int numRows;
    private final int seatsPerRow;
    private ArrayList<Seat> seats;

    static final Comparator<Seat> PRICE_ORDER = new Comparator<Seat>() {
        @Override
        public int compare(Seat seat1, Seat seat2) {
            if (seat1.getPrice() < seat2.getPrice())
                return -1;
            else if (seat1.getPrice() > seat2.getPrice())
                return 1;
            else
                return 0;
        }
    };


//    static {
//        PRICE_ORDER = new Comparator<Seat>() {
//            @Override
//            public int compare(Seat seat1, Seat seat2) {
//                if (seat1.getPrice() < seat2.getPrice())
//                    return -1;
//                else if (seat1.getPrice() > seat2.getPrice())
//                    return 1;
//                else
//                    return 0;
//            }
//        };
//    }     //we can also use static initializers to instantiate the anonymous inner Comparator object

    public Theatre(String nameOfTheTheatre) {
        this.nameOfTheTheatre = nameOfTheTheatre;
        this.seatsPerRow = 12;
        this.numRows = 12;
        this.seats = new ArrayList<Seat>();

        for(char i = 'A'; i <= 'A' + numRows - 1; i++) {
            for(int j = 1; j <= seatsPerRow; j++) {
                double price = 12.00;

                if(i < 'D' && j >= 4 && j <= 9)
                    price = 14.00;
                else if(i > 'F' || j < 4 || j > 9)
                    price = 7.00;

                this.seats.add(new Seat(i + String.format("%02d", j), price));
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

    public static final class Seat implements Comparable<Seat> {
        private final String seatNumber;
        private boolean isReserved;
        private double price;

        public Seat(String seatNumber) {
            this(seatNumber, 0.00);
        }

        public Seat(String seatNumber, double price) {
            this.seatNumber = seatNumber;
            this.isReserved = false;
            this.price = price;
        }

        @Override
        public int compareTo(Seat o) {
            return seatNumber.compareToIgnoreCase(o.seatNumber);
        }

        public boolean reserveSeat() {
            if(!isReserved) {
                isReserved = true;
                return true;
            }
            else {
                return false;
            }
        }

        public boolean cancel() {
            if(isReserved) {
                isReserved = false;
                return true;
            }
            else {
                return false;
            }
        }

        public String getSeatNumber() {
            return seatNumber;
        }

        public double getPrice() {
            return price;
        }

    }

    public Collection<Seat> getSeats() {
        return seats;
    }
}
