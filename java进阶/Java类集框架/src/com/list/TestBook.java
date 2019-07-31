package com.list;

import java.util.ArrayList;
import java.util.List;

public class TestBook {
    public static void main(String[] args) {
        List<Book> all = new ArrayList<>();
        all.add(new Book("java",20.0));
        all.add(new Book("gyk",10000.0));
        all.add(new Book("hjr",50000.0));
        all.remove(new Book("java",20.0));
        System.out.print(all);
    }
}
