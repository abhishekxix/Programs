package Inheritance;

import java.util.Scanner;

public class Student {

    private static final Scanner sc = new Scanner(System.in);
    private int rollNumber;
    private String name;

    public Student(int rollNumber, String name) {
        this.rollNumber = rollNumber;
        this.name = name;
    }

    public int getRollNumber() {
        return rollNumber;
    }

    public void setRollNumber(int rollNumber) {
        this.rollNumber = rollNumber;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public static void main(String[] args) {
        System.out.println("Enter the details of 10 students:");

        Student[] array = new Student[10];
        String tempName = null;
        int rollNumber = 0;

        try {
            for(int i = 0; i < 11; i++) {

                System.out.printf("Student no. %d:\n" +
                        "\tEnter the name: ", i + 1);
                tempName = sc.nextLine();
                System.out.printf("\tEnter the roll number: ");
                rollNumber = sc.nextInt();
                sc.nextLine();

                array[i] = new Student(rollNumber, tempName);
            }
        } catch(IndexOutOfBoundsException e) {
            e.printStackTrace();
        } finally {
            for(int i = 0; i < 10; i++) {

                System.out.printf("Student no. %d:\n" +
                        "\t%s\n" +
                        "\t%d", i + 1, array[i].getName(), array[i].getRollNumber());
            }
        }
    }
}


