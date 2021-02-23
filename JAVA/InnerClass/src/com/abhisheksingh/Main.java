package com.abhisheksingh;

import java.util.Scanner;

public class Main {

    private static Scanner scanner = new Scanner(System.in);
    private static Button btnPrint = new Button("Print");

    public static void main(String[] args) {
//        GearBox mcLaren = new GearBox(6);
//        mcLaren.addGear(1, 5.3);
//        mcLaren.addGear(1, 10.6);
//        mcLaren.addGear(1, 15.9);
//        mcLaren.operateClutch(true);
//
//        mcLaren.changeGear(1);
//        mcLaren.operateClutch(false);
//        System.out.println(mcLaren.wheelSpeed(1000));
//        mcLaren.changeGear(2);
//        System.out.println(mcLaren.wheelSpeed(3000));
//        mcLaren.operateClutch(true);
//        mcLaren.changeGear(3);
//        class ClickListener implements Button.OnClickListener {
//            public int abc;
//            public ClickListener() {
//                System.out.println("I've been attached.");
//            }
//
//            @Override
//            public void onClick(String title) {
//                System.out.println(title + " was clicked.");
//            }
//        }
//        int sum = 45;
//        sum = 34;
//
//        ClickListener a = new ClickListener();
//        a.abc = sum;
//
//        btnPrint.setOnClickListener(new ClickListener());

        btnPrint.setOnClickListener(new Button.OnClickListener() {
            @Override
            public void onClick(String title) {
                System.out.println(title + " was clicked.");
            }
        });
        listen();
        scanner.close();
    }

    private static void listen() {
        boolean quit = false;

        while(!quit) {
            int choice  = scanner.nextInt();
            scanner.nextLine();

            switch(choice) {
                case 0 :
                    quit = true;
                    break;

                case 1 :
                    btnPrint.onClick();
                    break;
            }
        }
    }
}
