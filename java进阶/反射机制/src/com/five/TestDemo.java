package com.five;

import java.lang.reflect.Method;

public class TestDemo {
    public static void main(String[] args) throws Exception{
        String a = "name";
        Class<?> cls = Class.forName("com.five.Book");
        Object obj = cls.newInstance();
        Method setMet = cls.getMethod("set"+initcap(a),String.class);
        Method getMet = cls.getMethod("get"+initcap(a));
        setMet.invoke(obj,"java");
        System.out.println(getMet.invoke(obj));
    }

    private static String initcap(String a) {
        return a.substring(0,1).toUpperCase()+a.substring(1);
    }
}
