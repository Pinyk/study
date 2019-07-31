package com.iterator;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class IteratorOutput {
    public static void main(String[] args) {
        List<String> all = new ArrayList<>();
        all.add("Hello");
        all.add("gyk");
        all.add("hh");
        Iterator<String> iter = all.iterator();
        while(iter.hasNext()){
            String str = iter.next();
            System.out.println(str);
        }
    }
}
