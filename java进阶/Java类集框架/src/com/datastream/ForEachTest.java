package com.datastream;

import java.util.ArrayList;
import java.util.List;

public class ForEachTest {
    public static void main(String[] args) {
        List<String> all = new ArrayList<>();
        all.add("gyk");
        all.add("hjr");
        all.add("hh");
        all.forEach(System.out::println);
    }
}
