package com.datastream;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class PaginationTest {
    public static void main(String[] args) throws Exception{
        List<String> all = new ArrayList<>();
        all.add("gyk");
        all.add("hjy");
        all.add("hjr");
        all.add("yyy");
        all.add("hh");
        all.add("hh");
        Stream<String> stream = all.stream();
        List<String> newAll = stream.distinct().map(x -> x.toUpperCase()).
                filter(x -> x.contains("Y")).skip(1).limit(1).collect(Collectors.toList());
        newAll.forEach(System.out::println);

    }
}
