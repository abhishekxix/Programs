package OOP;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	    int choice = 0;

	    HamBurger hamBurger = null;
        Scanner scanner = new Scanner(System.in);
        String nameInput = null;
        String breadRollTypeInput = null;
        String meatTypeInput = null;
        double priceInput = 0.0;
        char additionsChoice = '0';

	    do {
            System.out.print("\nEnter the type of burger you want to order :\n" +
                    "1. Hamburger.\n" +
                    "2. Healthy Burger\n" +
                    "3. Deluxe Hamburger\n" +
                    "0. Exit\n->");
            choice = scanner.nextInt();
            scanner.nextLine();

            switch(choice) {
                case 1 :
                    System.out.print("\nEnter the name : ");
                    nameInput = scanner.nextLine();
                    System.out.print("\nEnter the type of bread roll : ");
                    breadRollTypeInput = scanner.nextLine();
                    System.out.print("\nEnter the type of meat : ");
                    meatTypeInput = scanner.nextLine();
                    System.out.print("Enter the base price of the burger : ");
                    priceInput = scanner.nextDouble();
                    scanner.nextLine();

                    hamBurger = new HamBurger(nameInput, breadRollTypeInput,
                            meatTypeInput, priceInput);

                    break;

                case 2 :
                    System.out.print("\nEnter the name : ");
                    nameInput = scanner.nextLine();
                    System.out.print("\nEnter the type of meat : ");
                    meatTypeInput = scanner.nextLine();
                    System.out.print("\nEnter the base price of the burger : ");
                    priceInput = scanner.nextDouble();
                    scanner.nextLine();

                    hamBurger = new HealthyBurger(nameInput,
                            meatTypeInput, priceInput);
                    break;

                case 3 :
                    System.out.print("\nEnter the name : ");
                    nameInput = scanner.nextLine();
                    System.out.print("\nEnter the type of bread roll : ");
                    breadRollTypeInput = scanner.nextLine();
                    System.out.print("\nEnter the type of meat : ");
                    meatTypeInput = scanner.nextLine();
                    System.out.print("\nEnter the base price of the burger : ");
                    priceInput = scanner.nextDouble();
                    scanner.nextLine();

                    double chipsPrice = 0.0;
                    double coldDrinkPrice = 0.0;

                    System.out.print("\nEnter price of Chips : ");
                    chipsPrice = scanner.nextDouble();
                    scanner.nextLine();
                    System.out.print("\nEnter the base price of the Cold drink : ");
                    coldDrinkPrice = scanner.nextDouble();
                    scanner.nextLine();

                    hamBurger = new DeluxeHamburger(nameInput, breadRollTypeInput,
                            meatTypeInput, priceInput, chipsPrice, coldDrinkPrice);
                    break;

                case 0 :
                    System.out.println("Quitting....");
                    break;

                default :
                    System.out.println("Invalid input!");
            }
            if(choice == 0)
                break;
            System.out.println("Do you want to have some additions to the burger (Y or N): ");
            additionsChoice = Character.toUpperCase(scanner.next().charAt(0));

            if(additionsChoice == 'Y') {
                System.out.print("\nEnter the name of the addition : ");
                nameInput = scanner.nextLine();
                System.out.print("\nEnter the price of " + nameInput + " : ");
                priceInput = scanner.nextDouble();

                hamBurger.setAddition1(nameInput, priceInput);

                System.out.println("Do you want more additions? : (Y or N)");
                additionsChoice = Character.toUpperCase(scanner.next().charAt(0));

                if(additionsChoice == 'Y') {
                    System.out.print("\nEnter the name of the addition : ");
                    nameInput = scanner.nextLine();
                    System.out.print("\nEnter the price of " + nameInput + " : ");
                    priceInput = scanner.nextDouble();

                    hamBurger.setAddition2(nameInput, priceInput);

                    System.out.println("Do you want more additions? : (Y or N)");
                    additionsChoice = Character.toUpperCase(scanner.next().charAt(0));

                    if(additionsChoice == 'Y') {
                        System.out.print("\nEnter the name of the addition : ");
                        nameInput = scanner.nextLine();
                        System.out.print("\nEnter the price of " + nameInput + " : ");
                        priceInput = scanner.nextDouble();

                        hamBurger.setAddition3(nameInput, priceInput);

                        System.out.println("Do you want more additions? : (Y or N)");
                        additionsChoice = Character.toUpperCase(scanner.next().charAt(0));

                        if(additionsChoice == 'Y') {
                            System.out.print("\nEnter the name of the addition : ");
                            nameInput = scanner.nextLine();
                            System.out.print("\nEnter the price of " + nameInput + " : ");
                            priceInput = scanner.nextDouble();

                            hamBurger.setAddition3(nameInput, priceInput);

                            System.out.println("Do you want more additions? : (Y or N)");
                            additionsChoice = Character.toUpperCase(scanner.next().charAt(0));

                            if(additionsChoice == 'Y') {
                                System.out.print("\nEnter the name of the addition : ");
                                nameInput = scanner.nextLine();
                                System.out.print("\nEnter the price of " + nameInput + " : ");
                                priceInput = scanner.nextDouble();

                                hamBurger.setAddition4(nameInput, priceInput);
                            }
                        }
                    }
                }
            }
            hamBurger.showInvoice();
        }while(choice != 0);

	    scanner.close();
    }
}