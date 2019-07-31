package com.collections;

import java.net.CookieHandler;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class AddTodataTest {
    public static void main(String[] args) throws Exception{
        List<String> all = new ArrayList<>();
        Collections.addAll(all,"gyk","hjr","hhh","xh");
        Collections.reverse(all);
        System.out.println(all);
    }
}
