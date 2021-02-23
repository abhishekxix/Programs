package com.abhisheksingh;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

public class Main {
    private static final Map<String, HeavenlyBody> solarSystem = new HashMap<>();
    private static final Set<HeavenlyBody> planets = new HashSet<>();

    public static void main(String[] args) {
        HeavenlyBody temp = new Planet("Mercury", 88.0);
        solarSystem.put(temp.getKey().getName(), temp);
        planets.add(temp);

//        temp = new HeavenlyBody("Venus", 225);
//        solarSystem.put(temp.getName(), temp);
//        planets.add(temp);
//
//        temp = new HeavenlyBody("Earth", 365);
//        solarSystem.put(temp.getName(), temp);
//        planets.add(temp);
//
//        HeavenlyBody tempMoon = new HeavenlyBody("Moon", 27);
//        solarSystem.put(tempMoon.getName(), temp);
//        temp.addSatellilte(tempMoon);
//
//        System.out.println("Planets :");
//        for(var planet : planets)
//            System.out.println("\t" + planet.getName());
//
//
//
//        HeavenlyBody earth = new HeavenlyBody("Earth", 842);
//        planets.add(earth);
//
//        for(var planet : planets)
//            System.out.println(planet.getName() + " " + planet.getOrbitalPeriod());
    }
}
