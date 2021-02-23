package com.abhisheksingh;

import java.util.Scanner;

public class Main {
    private static final Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        /*try {
//            FileInputStream file = new FileInputStream("data.txt");
//            FileChannel channel = file.getChannel();
            Path dataPath = FileSystems.getDefault().getPath("data.txt");

            Files.write(dataPath, "\nLine 4".getBytes(StandardCharsets.UTF_8), StandardOpenOption.APPEND);

            List<String> lines = Files.readAllLines(dataPath);
            for(String  line : lines) {
                System.out.println(line);
            }
        } catch(IOException e) {
            e.printStackTrace();
        }*/
       solve();
    }


    public static void solve() {
        int num;
        System.out.print("Enter a number that you like -> ");
        num = scanner.nextInt();
        System.out.printf("You entered %d and that is the sole reason of you\n" +
                "being stupid as hell.\n", num);
    }
}
