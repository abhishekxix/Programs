package com.abhisheksingh;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Main {

    public static void main(String[] args) {
        Theatre theatre = new Theatre("Olympian");
//        List<Theatre.Seat> seatCopy = new ArrayList<>(theatre.getSeats());   //creates a new arrayList and copies the references to the stored objects (Shallow Copy).
//        Collections.shuffle(seatCopy);
//        printList(seatCopy);
//        Theatre.Seat minSeat = Collections.min(seatCopy);
//        Theatre.Seat maxSeat = Collections.max(seatCopy);
//
//        System.out.println("Min seat number : " + minSeat.getSeatNumber()
//                            + "\nMax seat number : " + maxSeat.getSeatNumber());
//        sortList(seatCopy);
//        printList(seatCopy);
    }

    private static void printList(List<Theatre.Seat> list) {
        for(var seat : list) {
            System.out.print(" " + seat.getSeatNumber());
        }
        System.out.println();
        System.out.println("================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================");
    }

//    public static void sortList(List<? extends Theatre.Seat> list) {
//        for(int i = 0; i < list.size() - 1; i++) {
//            for(int j = i + 1; j < list.size(); j++) {
//                if(list.get(i).compareTo(list.get(j)) > 0) {
//                    Collections.swap(list, i, j);
//                }
//            }
//        }
//    }
}
