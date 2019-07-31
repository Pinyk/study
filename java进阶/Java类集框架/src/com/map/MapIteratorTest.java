package com.map;

import java.util.Hashtable;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;

public class MapIteratorTest {
    public static void main(String[] args) {
        Map<String,Integer> map = new Hashtable<>();
        map.put("a",1);
        map.put("b",2);
        map.put("c",3);
        map.put("d",6);
        Set<Map.Entry<String,Integer>> set = map.entrySet();
        Iterator<Map.Entry<String,Integer>> iter = set.iterator();
        while(iter.hasNext()){
            Map.Entry<String,Integer> me = iter.next();
            System.out.println(me.getKey() + "=" + me.getValue());
        }
    }
}