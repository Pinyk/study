package com.datastream;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class FilterTestO {
    public static void main(String[] args) throws Exception{
        List<String> all = new ArrayList<>();
        all.add("gyk");
        all.add("hjr");
        all.add("hjr");
        all.add("hh");
        all.add("hh");
        Stream<String> stream = all.stream();
        List<String> newAll = stream.distinct().map((x) -> x.toUpperCase()).
                filter((x) -> x.contains("Y")).collect(Collectors.toList());
        newAll.forEach(System.out::println);
    }
}
