package com.abhisheksingh;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

    private static final Locations locations = new Locations();

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Map<String, String> vocabulary = new HashMap<>();
        vocabulary.put("QUIT", "Q");
        vocabulary.put("NORTH", "N");
        vocabulary.put("SOUTH", "S");
        vocabulary.put("WEST", "W");
        vocabulary.put("EAST", "E");

        int loc = 1;
        while(true) {
            System.out.println(locations.get(loc).getDescription());

            if (loc == 0)
                break;
            Map<String, Integer> exits = locations.get(loc).getExits();
            System.out.println("The available exits are : ");

            for (var exit : exits.keySet()) {
                System.out.print(exit + " ");
            }
            System.out.println(":");

            String direction = scanner.nextLine().toUpperCase();
            if(direction.length() > 1) {
                String[] words = direction.split(" ");
                for(String word : words) {
                    if(vocabulary.containsKey(word)) {
                        direction = vocabulary.get(word);
                        break;
                    }
                }
            }

            if (exits.containsKey(direction))
                loc = exits.get(direction);
            else
                System.out.println("You can't go in that direction.");
        }
//       String[] road = "You are inside a building, a well known house for a small spring".split(" ");
//       for(String i : road)
//           System.out.println(i);
    }
}
