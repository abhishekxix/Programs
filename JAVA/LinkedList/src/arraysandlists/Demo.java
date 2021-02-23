package arraysandlists;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.ListIterator;
import java.util.Scanner;

public class Demo {

    public static void main(String[] args) {
        LinkedList<String> placesToVisit = new LinkedList<>();

/*        placesToVisit.add("Sydney");
        placesToVisit.add("Melbourne");
        placesToVisit.add("Brisbane");
        placesToVisit.add("Perth");
        placesToVisit.add("Canberra");
        placesToVisit.add("Adelaide");
        placesToVisit.add("Darwin");*/


        /*placesToVisit.add(1, "ALice Springs.");

        printList(placesToVisit);

        placesToVisit.remove(4);

        printList(placesToVisit);*/


        addInOrder(placesToVisit, "Sydney");
        addInOrder(placesToVisit, "Melbourne");
        addInOrder(placesToVisit, "Brisbane");
        addInOrder(placesToVisit, "Perth");
        addInOrder(placesToVisit, "Canberra");
        addInOrder(placesToVisit, "Adelaide");
        addInOrder(placesToVisit, "Darwin");
        addInOrder(placesToVisit, "Darwin");

        printList(placesToVisit);
        System.out.println();
        visit(placesToVisit);
    }

    private static void printList(LinkedList<String> linkedList) {
        Iterator<String> i = linkedList.iterator();
        while(i.hasNext()) {
            System.out.println("Now visiting " + i.next());
        }

        System.out.println("============================");
    }

    private  static boolean addInOrder(LinkedList<String> linkedList, String newCity) {
        ListIterator<String> stringListIterator = linkedList.listIterator();
//        Iterator<String> it = linkedList.descendingIterator();
        while(stringListIterator.hasNext()) {
            int comparison = stringListIterator.next().compareTo(newCity);
            if(comparison == 0) {
                //equal - do not add.
                System.out.println(newCity + " is already included as a destination.");
                return false;
            }
            else if(comparison > 0) {
                //newCity should appear before the current one.
                //Brisbane > Adelaide
                stringListIterator.previous();
                stringListIterator.add(newCity);
                return true;
            }
            else {
                //move on to next city because new city comes after current
                //This has already been done during the comparison so we don't
                //actually need to do anything.
            }
        }
        //When we have reached the end of the list(EOL)
        stringListIterator.add(newCity);
        return true;
    }

    private static void visit(LinkedList cities) {
        Scanner scanner = new Scanner(System.in);
        boolean quit = false;
        boolean goingForward = true;
        ListIterator<String> listIterator = cities.listIterator();

        if(cities.isEmpty()) {
            System.out.println("No cities int hte itinerary");
            return;
        }
        else  {
            System.out.println("Now visiting " + listIterator.next());
            printMenu();
        }

        while(!quit) {
            int action = scanner.nextInt();
            scanner.nextLine();

            switch(action) {
                case 0 :
                    System.out.println("Holiday Over");
                    quit = true;
                    break;

                case 1 :
                    if(!goingForward) {
                        if (listIterator.hasNext())
                            listIterator.next();
                        goingForward = true;
                    }
                    if(listIterator.hasNext())
                        System.out.println("Now visiting " + listIterator.next());
                    else {
                        System.out.println("Reached the end of the list");
                        goingForward = false;
                    }
                    break;

                case 2 :
                    if(goingForward) {
                        if(listIterator.hasPrevious()) {
                            listIterator.previous();
                        }
                        goingForward = false;
                    }
                    if(listIterator.hasPrevious()) {
                        System.out.println("Visiting " + listIterator.previous());
                    }
                    else {
                        System.out.println("We are at the start of the list");
                        goingForward = true;
                    }
                    break;

                case 3 :
                    printMenu();
                    break;

                default :
                    System.out.println("Invalid input");
            }
        }
        scanner.close();
    }

    private static void printMenu() {
        System.out.println("Available actions :\npress :");
        System.out.println("0 - quit\n" +
                "1 - next\n" +
                "2 - previous\n" +
                "3 - print menu");
    }

}
