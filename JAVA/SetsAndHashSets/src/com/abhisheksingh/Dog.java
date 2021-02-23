package com.abhisheksingh;

public class Dog {
    private final String name;

    public Dog(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    @Override
    public final boolean equals(Object obj) {   //This has been marked final to prevent the problem with subclasses implementing equals() method.
        if(this == obj)
            return true;

        if(obj instanceof Dog) {
            String objectName = ((Dog) obj).getName();
            return this.getName().equals(objectName);
        }
        return false;
    }
}
