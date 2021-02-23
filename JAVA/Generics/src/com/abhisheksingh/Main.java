package com.abhisheksingh;

//import java.util.ArrayList;

public class Main {

    public static void main(String[] args) {
//        ArrayList<Integer> items = new ArrayList<>();
//
//        for(int i = 0; i < 5; i++)
//            items.add(i);
//
//        printDoubled(items);

//        FootballPlayer abhishek = new FootballPlayer("Abhishek");
        BaseballPlayer pat = new BaseballPlayer("Pat");
        SoccerPlayer beckham = new SoccerPlayer("David Beckham");

        Team<SoccerPlayer> adelaideCrows = new Team<>("Adelaide Crows");
//        adelaideCrows.addPlayer(abhishek);
//        adelaideCrows.addPlayer(pat);
        adelaideCrows.addPlayer(beckham);
        System.out.println(adelaideCrows.numPlayers());

        Team<BaseballPlayer> BaseballTeam = new Team<>("Chicago Cubs");
    }

//    private static void printDoubled(ArrayList<Integer> n) {
//
//        for(var item : n) {
//            System.out.println(item * 2);
//        }
//    }

}
