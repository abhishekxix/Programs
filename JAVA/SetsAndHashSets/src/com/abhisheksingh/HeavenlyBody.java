package com.abhisheksingh;

import java.util.HashSet;
import java.util.Set;

public abstract class HeavenlyBody {

    private final Key key;
    private final double orbitalPeriod;
    private final Set<HeavenlyBody> satellites;

    public Key getKey() {
        return key;
    }

    public enum BodyType {
        STAR(0),
        PLANET(1),
        DWARF_PLANET(2),
        MOON(3),
        COMET(4),
        ASTEROID(5);

        private int intValue;

        BodyType(int intValue) {
            this.intValue = intValue;
        }

        public int getIntValue() {
            return intValue;
        }

    }

    public HeavenlyBody(String name, double orbitalPeriod, BodyType bodyType) {
        this.orbitalPeriod = orbitalPeriod;
        this.satellites = new HashSet<>();
        this.key = new Key(name, bodyType);
    }



    public double getOrbitalPeriod() {
        return orbitalPeriod;
    }

    public boolean addSatellilte(HeavenlyBody satellite) {
        return this.satellites.add(satellite);
    }

    public Set<HeavenlyBody> getSatellites() {
        return new HashSet<>(this.satellites);
    }

    @Override
    public final boolean equals(Object obj) {
        if(this == obj)
            return true;

//        if(obj == null || (obj.getClass() != this.getClass()))
        if(obj instanceof HeavenlyBody) {
//           return this.name.equals(((HeavenlyBody) obj).name);
            HeavenlyBody theObject = (HeavenlyBody) obj;
//            return this.bodyType == theObject.getBodyType();
            return this.key.equals(theObject.getKey());
        }
        return false;
    }

    @Override
    public final int hashCode() {
        return this.key.hashCode();
    }

    @Override
    public String toString() {
        return (this.key.getName() + " : " + this.key.getBodyType() + ", " + this.orbitalPeriod);
    }

    public static Key makeKey(String name, BodyType bodyType) {
        return new Key(name, bodyType);
    }
    public static final class Key {
        private String name;
        private BodyType bodyType;

        private Key(String name, BodyType bodyType) {
            this.name = name;
            this.bodyType = bodyType;
        }

        public String getName() {
            return name;
        }

        public BodyType getBodyType() {
            return bodyType;
        }

        @Override
        public int hashCode() {
            return this.name.hashCode() + 57 + this.bodyType.hashCode();
        }

        @Override
        public boolean equals(Object obj) {
            Key key = (Key) obj;
            if(this.name.equals(key.getName())) {
                return this.bodyType == key.getBodyType();
            }

            return false;
        }
    }
}
