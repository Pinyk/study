package com.six;

import java.lang.reflect.Field;

public class Main {
    public static void main(String[] args) throws Exception{
        Class<?> cls = Class.forName("com.six.Book");
        Object obj = cls.newInstance();
        Field a = cls.getDeclaredField("name");
        a.setAccessible(true);
        a.set(obj,"java");
        System.out.println(a.get(obj));
    }
}
