package com.abhisheksingh;

import java.util.ArrayList;

public class Team<E extends Player> implements Comparable<Team<E>>{
    private String teamName;
    private int played;
    private int won;
    private int lost;
    private int tied;
    private ArrayList<E> players;

    @Override
    public int compareTo(Team<E> o) {
        return 0;
    }

    public Team(String teamName) {
        this.teamName = teamName;
        this.played = 0;
        this.won = 0;
        this.lost = 0;
        this.tied = 0;
        this.players = new ArrayList<>();
    }

    public String getTeamName() {
        return teamName;
    }

    public boolean addPlayer(E player) {
        boolean isSuccessful = false;
        if(this.players.contains(player)) {
            System.out.println(player.getName() + " is already in the team.");
        }
        else {
            this.players.add(player);
            System.out.println(player.getName() + " picked for team " + this.teamName);
            isSuccessful = true;
        }
        return isSuccessful;
    }

    public int numPlayers() {
        return this.players.size();
    }

    public void matchResult(Team<E> opponent, int ourScore, int theirScore) {
        if(ourScore > theirScore)
            this.won++;
        else if(ourScore == theirScore)
            this.tied++;
        else
            this.lost++;

        this.played++;

        if(opponent != null) {
            opponent.matchResult(null, theirScore, ourScore);
        }
    }

    public int ranking() {
        return (this.won * 2) + tied;
    }

}
