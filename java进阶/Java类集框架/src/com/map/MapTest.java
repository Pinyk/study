package com.map;

import java.util.HashMap;
import java.util.Map;

public class MapTest {
    public static void main(String[] args) {
        Map<String, Integer> all = new HashMap<>();
        all.put("a",1);
        all.put("b",2);
        all.put("p",4);
        all.put("w",10);
        all.put("w",18);
        all.put("c",3);
        all.put(null,0);
        System.out.println(all);
        System.out.println(all.get("c"));
    }
}
