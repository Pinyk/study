package com.four;

import java.lang.reflect.Constructor;

public class TestDemp {
    public static void main(String[] args) throws Exception{
        Class<?> cls = Class.forName("com.four.Book");
        Constructor<?> con = cls.getConstructor(String.class,Integer.class);
        Object obj = con.newInstance("java开发",20);
        System.out.println(obj);
    }
}
