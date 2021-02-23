package com.abhisheksingh;

import java.io.*;
import java.util.*;

public class Locations implements Map<Integer, Location> {
    private static final Map<Integer, Location> locations = new HashMap<>();

    public static void main(String[] args) { //we are not handling the IO exception but throwing it.(specifying)
/*        FileWriter locationFile = null;
        try {
            locationFile = new FileWriter("locations.txt");

        for(Location location : locations.values()) {
            locationFile.write(location.getLocationId() + ", " + location.getDescription() + "\n");
                throw new IOException("test exception thrown while writing.");
        }
        }
        catch(IOException e) {
            e.printStackTrace();
        }
        finally {
            System.out.println("In finally block");
            try {
        if(locationFile != null) {
            System.out.println("Attempting to close locationFile.");
            locationFile.close();
        }

            }
            catch(IOException e) {
                e.printStackTrace();
            }
        }*/
//
//        try(FileWriter locationFile = new FileWriter("locations.txt");
//            FileWriter dirFile = new FileWriter("directions.txt")) {
//
//            for(Location location : locations.values()) {
//                locationFile.write(location.getLocationId() + "," + location.getDescription() + "\n");
//                for(String direction : location.getExits().keySet()) {
//                    dirFile.write(location.getLocationId() + "," + direction + "," + location.getExits().get(direction) + "\n");
//                }
//            }
//
//        }

        //Store the loaded text files in binary format
        try (DataOutputStream locationFile = new DataOutputStream(new BufferedOutputStream
                (new FileOutputStream("locations.dat")))) {

            for(Location location : locations.values()) {
                locationFile.writeInt(location.getLocationId());
                locationFile.writeUTF(location.getDescription());
                System.out.println("Writing location : " + location.getLocationId() + " : " + location.getDescription());
                System.out.println("Writing " + (location.getExits().size() - 1) + "exits");
                locationFile.writeInt(location.getExits().size() - 1);
                for(String direction : location.getExits().keySet()) {
                    System.out.println("\t\t" + direction + "," + location.getExits().get(direction));
                    locationFile.writeUTF(direction);
                    locationFile.writeInt(location.getExits().get(direction));
                }
            }
        }
        catch (IOException e) {
            e.printStackTrace();
        }
    }

    static {
//        Map<String, Integer> tempExits = new HashMap<>();
//        locations.put(0, new Location(0, "You are sitting in front of a computer learning Java", tempExits));
//        tempExits.put("W", 2);
//        tempExits.put("E", 3);
//        tempExits.put("S", 4);
//        tempExits.put("N", 5);
//        locations.put(1, new Location(1, "You are standing at the end of a road before a small brick building", tempExits));
//
//        tempExits = new HashMap<>();
//        tempExits.put("N", 5);
//        locations.put(2, new Location(2, "You are at the top of a hill", tempExits));
//
//        tempExits = new HashMap<>();
//        tempExits.put("W", 1);
//        locations.put(3, new Location(3, "You are inside a building, a well known house for a small spring", tempExits));
//
//        tempExits = new HashMap<>();
//        tempExits.put("N", 1);
//        tempExits.put("W", 2);
//        locations.put(4, new Location(4, "You are in a valley beside a stream", tempExits));
//
//        tempExits = new HashMap<>();
//        tempExits.put("S", 1);
//        tempExits.put("W", 2);
//        locations.put(5, new Location(5, "You are in a forest", tempExits));
//        Scanner scanner = null;
//
//        try {
//            scanner = new Scanner(new FileReader("locations_big.txt"));
//            scanner.useDelimiter(",");
//
//            while(scanner.hasNext()) {
//                int loc = scanner.nextInt();
//                scanner.skip(scanner.delimiter());
//                String description = scanner.nextLine();
//                System.out.println("Imported " + loc + " : " + description);
//                Map<String, Integer> tempExit = new HashMap<>();
//                locations.put(loc, new Location(loc, description, tempExit));
//            }
//        }
//        catch(IOException e) {
//            e.printStackTrace();
//        }
//        finally {
//            if(scanner != null) {
//                scanner.close();     //Also closes any stream that it is using.
//            }
//        }

//        try(BufferedReader locationFile = new BufferedReader(new FileReader("locations_big.txt"))) {
//            String input;
//            while((input = locationFile.readLine()) != null) {
//                String[] inputs = input.split(",");
//                int loc = Integer.parseInt(inputs[0]);
//                String description = inputs[1];
//                System.out.println("Imported " + loc + " : " + description);
//                Map<String, Integer> tempExit = new HashMap<>();
//                locations.put(loc, new Location(loc, description, tempExit));
//            }
//        }
//        catch(IOException e) {
//            e.printStackTrace();
//        }

        //Now read the exits
//        try {
//            scanner = new Scanner(new BufferedReader(new FileReader("directions_big.txt")));
//            scanner.useDelimiter(",");
//
//            while(scanner.hasNextLine()) {
//                int loc = scanner.nextInt();
//                scanner.skip(scanner.delimiter());
//                String direction = scanner.next();
//                scanner.skip(scanner.delimiter());
//                String dest = scanner.nextLine();
//                int destination = Integer.parseInt(dest);
//                System.out.println(loc + " -> " + direction + " -> " + destination);
//                Location location = locations.get(loc);
//                location.addExit(direction, destination);
//            }
//        }
//        catch (IOException e) {
//            e.printStackTrace();
//        }
//        finally {
//            if(scanner != null)
//                scanner.close();
//        }
//        try(BufferedReader dirFile = new BufferedReader(new FileReader("directions_big.txt"))) {
//            String input;
//            while((input = dirFile.readLine()) != null) {
//                String[] inputs = input.split(",");
//                int loc = Integer.parseInt(inputs[0]);
//                String direction = inputs[1];
//                int destination = Integer.parseInt(inputs[2]);
//                System.out.println(loc + " -> " + direction + " -> " + destination);
//                Location location = locations.get(loc);
//                location.addExit(direction, destination);
//            }
//        }
//        catch(IOException e) {
//            e.printStackTrace();
//        }

        try(DataInputStream locationFile = new DataInputStream(new BufferedInputStream(new FileInputStream("locations.dat")))) {
            boolean endOfFile = false;
            while(!endOfFile) {   //it terminates when the file being read reaches the end and the eof exception is thrown.

                try {
                    Map<String, Integer> exits = new LinkedHashMap<>();
                    int locId = locationFile.readInt();
                    String description = locationFile.readUTF();
                    int numExits = locationFile.readInt();
                    System.out.println("Read Location " + locId + " : " + description);
                    System.out.printf("found %d exits\n", numExits);

                    for(int i = 0; i < numExits; i++) {
                        String direction = locationFile.readUTF();
                        int destination = locationFile.readInt();
                        exits.put(direction, destination);
                        System.out.printf("\t\t%s, %d\n", direction, destination);
                    }
                    locations.put(locId, new Location(locId, description, exits));
                }
                catch(EOFException e) {
                    endOfFile = true;
                }

            }
        }
        catch(IOException e) {
            e.printStackTrace();
        }
    }

    @Override
    public int size() {
        return locations.size();
    }

    @Override
    public boolean isEmpty() {
        return locations.isEmpty();
    }

    @Override
    public boolean containsKey(Object key) {
        return locations.containsKey(key);
    }

    @Override
    public boolean containsValue(Object value) {
        return locations.containsValue(value);
    }

    @Override
    public Location get(Object key) {
        return locations.get(key);
    }

    @Override
    public Location put(Integer key, Location value) {
        return locations.put(key, value);
    }

    @Override
    public Location remove(Object key) {
        return locations.remove(key);
    }

    @Override
    public void putAll(Map<? extends Integer, ? extends Location> m) {
        locations.putAll(m);
    }

    @Override
    public void clear() {
        locations.clear();
    }

    @Override
    public Set<Integer> keySet() {
        return locations.keySet();
    }

    @Override
    public Collection<Location> values() {
        return locations.values();
    }

    @Override
    public Set<Entry<Integer, Location>> entrySet() {
        return locations.entrySet();
    }
}