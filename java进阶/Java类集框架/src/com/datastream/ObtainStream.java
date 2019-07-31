package com.datastream;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Stream;

public class ObtainStream {
    public static void main(String[] args) {
        List<String> all = new ArrayList<>();
        all.add("gyk");
        all.add("hjr");
        all.add("hh");
        Stream<String> stream = all.stream();
        System.out.println(stream.count());
    }
}
