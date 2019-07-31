package com.map;

import java.util.Hashtable;
import java.util.Map;

public class BookTest {
    public static void main(String[] args) {
        Map<Book,String> map = new Hashtable<>();
        map.put(new Book("Java"), new String("hhh"));
        System.out.println(map.get(new Book("Java")));
    }
}
