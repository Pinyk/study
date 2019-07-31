package com.datastream;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class FilterTest {
    public static void main(String[] args) {
        List<String> all = new ArrayList<>();
        all.add("gyk");
        all.add("hjr");
        all.add("hjr");
        all.add("hh");
        all.add("hh");
        Stream<String> stream = all.stream();
        List<String> newAll = stream.distinct().
                filter((x) -> x.contains("y")).collect(Collectors.toList());
        newAll.forEach(System.out :: println);
    }
}
