package com.abhisheksingh;

import java.io.BufferedInputStream;
import java.io.EOFException;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.Serializable;

public class SerializablePerson implements Serializable {
    private long serialVersionUID = 1L;
    private int age;
    private String name;

    public SerializablePerson(int age, String name) {
        this.age = age;
        this.name = name;
    }

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


    public static void main(String[] args) {
//        SerializablePerson a = new SerializablePerson(10, "a");
//        SerializablePerson b = new SerializablePerson(11, "b");
//        SerializablePerson c = new SerializablePerson(12, "c");
//        SerializablePerson d = new SerializablePerson(13, "d");
//        SerializablePerson e = new SerializablePerson(14, "e");
//
//        try(ObjectOutputStream personFile = new ObjectOutputStream(new BufferedOutputStream(new FileOutputStream("person.dat")))) {
//            personFile.writeObject(a);
//            personFile.writeObject(b);
//            personFile.writeObject(c);
//            personFile.writeObject(d);
//            personFile.writeObject(e);
//        }
//        catch(IOException ex) {
//            ex.printStackTrace();
//        }

        try(ObjectInputStream personFile = new ObjectInputStream(new BufferedInputStream(new FileInputStream("person.dat")))) {
            boolean eof = false;
            int personNumber = 0;
            while(!eof) {
                try {
                    SerializablePerson readObject = (SerializablePerson)personFile.readObject();
                    personNumber++;
                    System.out.printf("%d. %s : %d\n", personNumber, readObject.getName(), readObject.getAge());
                }
                catch(EOFException ex) {
                    eof = true;
                }

            }
        }
        catch(IOException | ClassNotFoundException ex) {
            ex.printStackTrace();
        }

    }
}