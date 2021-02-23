package com.abhisheksingh;

import java.util.ArrayList;

public class RabinKarpsAlgorithm {
    public static ArrayList<Integer> findPatternInText(String text, String pattern) {
        int p = 982451653;
        int x = ((int)(Math.random() * (p - 1))) + 1;
        ArrayList<Integer> result = new ArrayList<>();
        int pHash = polyHash(pattern, p, x);
        ArrayList<Integer> hashes = preComputeHashes(text, pattern, p, x);

        for(int i = 0; i < text.length() - pattern.length(); i++) {
            if(pHash != hashes.get(i))
                continue;
            if(text.substring(i, i + pattern.length()).compareTo(pattern) == 0)
                result.add(i);
        }
        return result;
    }

    private static ArrayList<Integer> preComputeHashes(String text, String pattern, int p, int x) {
        ArrayList<Integer> hashes = new ArrayList<>();
        for(int i = 0; i < text.length() - pattern.length() + 1; i++) {
            hashes.add(-1);
        }

        int index = text.length() - pattern.length() - 1;
        String s = text.substring(index);
        hashes.set(index, polyHash(s, p, x));
        int y = 1;

        for(int i = 1; i <= pattern.length(); i++)
            y = (y * x) % p;

        for(int i = index; i >= 0; i--) {
            long value = ((x * hashes.get(i + 1)) + text.charAt(i) - (y * text.charAt(i + pattern.length()))) % p;
            hashes.set(i, (int) value);
        }
        return hashes;
    }

    private static int polyHash(String s, int p, int x) {
        int hash = 0;

        for(int i = s.length() - 1; i >= 0; i--) {
            hash = ((hash * x) + s.charAt(i)) % p;
        }
        return hash;
    }
}
