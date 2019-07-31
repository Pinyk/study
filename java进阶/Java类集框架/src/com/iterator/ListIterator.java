package com.iterator;

import java.util.ArrayList;
import java.util.List;

public class ListIterator {
    public static void main(String[] args) {
        List<String> all = new ArrayList<>();
        all.add("gyk");
        all.add("hjr");
        all.add("hhh");
        System.out.println("由前向后输：");
        java.util.ListIterator<String> iter = all.listIterator();
        while(iter.hasNext()){
            String str = iter.next();
            System.out.println(str + "、");
        }
        System.out.println("\n从后向前输");
        while(iter.hasPrevious()){
            String str = iter.previous();
            System.out.println(str + "、");
        }
    }
}
