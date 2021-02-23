package com.abhisheksingh;

import java.util.ArrayList;
import java.util.List;

public class Player implements ISaveable{
    private int health;
    private String name;
    private int hitPoints;
    private int strength;
    private String weapon;

    public Player(String name, int hitPoints, int strength) {
        this.name = name;
        this.hitPoints = hitPoints;
        this.strength = strength;
        this.weapon = "Light Saber";
        this.health = 100;
    }



    public void setWeapon(String weapon) {
        this.weapon = weapon;
    }

    @Override
    public String toString() {
        return "Player {" +
                "health = " + health +
                ", name = '" + name + '\'' +
                ", hitPoints = " + hitPoints +
                ", strength = " + strength +
                ", weapon = '" + weapon + '\'' +
                '}';
    }

    @Override
    public List<String> write() {
        List<String> values = new ArrayList<>();
        values.add(0, this.name);
        values.add(1, Integer.toString(this.health));
        values.add(2, "" + this.hitPoints);
        values.add(3, "" + this.strength);
        values.add(4, this.weapon);

        return values;
    }

    @Override
    public void read(List<String> savedValues) {
        if(savedValues != null && savedValues.size() == 5) {
            this.name = savedValues.get(0);
            this.health = Integer.parseInt(savedValues.get(1));
            this.hitPoints = Integer.parseInt(savedValues.get(2));
            this.strength = Integer.parseInt(savedValues.get(3));
            this.weapon = savedValues.get(4);
        }
    }
}
