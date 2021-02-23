package com.abhisheksingh;

import java.util.ArrayList;

public class MyDisjointSets {
    private ArrayList<Integer> parent;
    private ArrayList<Integer> rank;

    public MyDisjointSets(int n) {
        this.parent = new ArrayList<>(n);
        for(int i = 0; i < n; i++) {
            this.parent.add(i);
        }
        this.rank = new ArrayList<>(n);
        for(int i = 0; i < n; i++) {
            this.rank.add(i);
        }
    }

    public void makeSet(Integer n) {
        parent.set(n, n);
        rank.set(n, 0);
    }
    public Integer find(int i) {
        while(i != parent.get(i))
            i = parent.get(i);
        return i;
    }

    public void union(int i, int j) {
        int iId = find(i);
        int jId = find(j);

        if(iId == jId) {
            return;
        }
        if(rank.get(iId) > rank.get(jId))
            parent.set(jId, iId);
        else {
            parent.set(iId, jId);
            if(rank.get(iId).equals(rank.get(jId)))
                rank.set(jId, rank.get(jId) + 1);
        }
    }

    public Integer getRank(int i) {
        return rank.get(i);
    }
}