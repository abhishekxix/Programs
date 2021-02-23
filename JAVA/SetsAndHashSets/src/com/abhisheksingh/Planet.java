package com.abhisheksingh;

public class Planet extends HeavenlyBody {

    public Planet(String name, double orbitalPeriod) {
        super(name, orbitalPeriod, BodyType.PLANET);
    }

    @Override
    public boolean addSatellilte(HeavenlyBody satellite) {
        if(satellite.getBodyType() == BodyType.MOON) {
            return super.addSatellilte(satellite);
        }
        return false;
    }
}
