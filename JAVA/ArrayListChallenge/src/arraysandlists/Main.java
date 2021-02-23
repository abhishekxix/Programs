package arraysandlists;

import java.util.Scanner;

public class Main {
    private static Scanner scanner = new Scanner(System.in);
    private static MobilePhone mobilePhone = new MobilePhone();

    public static void main(String[] args) {
        boolean quit = false;
        int choice = 0;
        printInstructions();

        while(!quit) {
            System.out.println("Enter your choice : ");
            choice = scanner.nextInt();
            scanner.nextLine();

            switch(choice) {
                case 0 :
                    printInstructions();
                    break;

                case 1 :
                    mobilePhone.printContacts();
                    break;

                case 2 :
                    addContact();
                    break;

                case 3 :
                    modifyContact();
                    break;

                case 4 :
                    removeContact();
                    break;

                case 5 :
                    findContact();
                    break;

                case 6 :
                    quit = true;
                    break;

                default :
                    System.out.println("Invalid choice.");
            }
        }
        scanner.close();
    }
    public static void printInstructions() {
        System.out.println("\nPress : ");
        System.out.println("\t 0 - To print the choice options.");
        System.out.println("\t 1 - To print the list of contacts.");
        System.out.println("\t 2 - To add an item to the list.");
        System.out.println("\t 3 - To modify a contact in the list.");
        System.out.println("\t 4 - To remove a contact from the list.");
        System.out.println("\t 5 - To search for a contact in the list.");
        System.out.println("\t 6 - To quit the application.");
    }

    public static void addContact() {
        System.out.print("Please enter the Contact name to add : ");
        String name = scanner.nextLine();
        System.out.print("\nPlease enter the Contact number to add : ");

        mobilePhone.addContact(name, scanner.nextLine());
    }

    public static void modifyContact() {
        System.out.println("\nEnter the position of the contact : ");
        int itemNumber = scanner.nextInt();
        scanner.nextLine();
        System.out.print("\nEnter the replacement contact name : ");
        String newName = scanner.nextLine();

        System.out.print("\nEnter the replacement contact number : ");
        String newNumber = scanner.nextLine();
        mobilePhone.updateContact(itemNumber, newName, newNumber);
    }

    public static void removeContact() {
        System.out.println("\nEnter the item number : ");
        int itemNumber = scanner.nextInt();
        scanner.nextLine();
        mobilePhone.removeContact(itemNumber);
    }

    public static void findContact() {
        System.out.print("Item to search for : ");
        String searchItem = scanner.nextLine();
        mobilePhone.find(searchItem);
    }
}

