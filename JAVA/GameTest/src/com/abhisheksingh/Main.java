package com.abhisheksingh;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        Player abhishek = new Player("Abhishek", 200, 3000);
//        System.out.println(abhishek/*.toString()*/); //.toString is not mandatory to type. It is assumed by the compiler automatically.
        abhishek.setWeapon("Dick");
//        System.out.println("\n" + abhishek);
        saveObject(abhishek);
        loadObject(abhishek);
        scanner.close();
    }

    public static ArrayList<String> readValues() {
        ArrayList<String> values  = new ArrayList<>();

        boolean quit = false;
        int index = 0;

        System.out.println("Chose\n" +
                "1 - enter a string\n" +
                "0 - quit");

        while(!quit) {
            System.out.println("Choose an option : ");
            int choice = scanner.nextInt();
            scanner.nextLine();
            switch(choice) {
                case 0 :
                    quit = true;
                    break;

                case 1 :
                    System.out.print("Enter a string : ");
                    String stringInput = scanner.nextLine();
                    values.add(index, stringInput);
                    index++;
                    break;
            }
        }
        return values;
    }

    public static void saveObject(ISaveable objectToSave) {     //will work with any class that implements the ISavable interface.
        for(int i = 0; i < objectToSave.write().size(); i++) {
            System.out.println("Saving " + objectToSave.write().get(i) + " to storage device.");
        }
    }

    public static void loadObject(ISaveable objectToLoad) {
        List<String> values = readValues();
        objectToLoad.read(values);
    }

}
