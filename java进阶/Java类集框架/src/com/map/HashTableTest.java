package com.map;

import java.util.Hashtable;
import java.util.Map;

public class HashTableTest {
    public static void main(String[] args) {
        Map<String, Integer> all = new Hashtable<>();
        all.put("a",1);
        all.put("b",2);
        all.put("p",4);
        all.put("w",10);
        all.put("c",3);
        //all.put(null,0);
        System.out.println(all.get("a"));
        //System.out.println(all.get(null));
    }
}
