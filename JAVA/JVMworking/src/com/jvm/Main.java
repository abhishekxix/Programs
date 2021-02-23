package com.jvm;

import java.lang.reflect.Field;
import java.lang.reflect.Method;

public class Main {

    public static void main(String[] args) {
        Person p = new Person();

        Class<? extends Person> o = p.getClass();
        System.out.println(o.getName());

        Method m[] = o.getDeclaredMethods();
        for(var method : m) {
            System.out.println(method.getName());
        }

        Field f[] = o.getDeclaredFields();

        for(var field : f) {
            System.out.println(field.getName());
        }
    }
}

class Person {
    int age;
    String name;
    double a;

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getA() {
        return a;
    }

    public void setA(double a) {
        this.a = a;
    }
}