package com.iterator;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class IteratorDelTest {
    public static void main(String[] args) {
        List<String> all = new ArrayList<>();
        all.add("gyk");
        all.add("hjr");
        all.add("hhh");
        Iterator<String> iter = all.iterator();
        while(iter.hasNext()){
            String str = iter.next();
            if("hjr".equals(str)){
                all.remove(str);
            }
            System.out.println(str);
        }
    }
}