package com.one;

import java.util.Date;

public class TestOne {
    public static void main(String[] args) {
        Date date = new Date();
        Class<?> cls = date.getClass();
        System.out.println(cls.getName());
    }
}
