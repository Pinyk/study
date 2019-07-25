package com.two;

public class TestOne {
    public static void main(String[] args) throws Exception{
        Class<?> cls = Class.forName("com.two.Book");
        Object obj = cls.newInstance();
        Book book = (Book)obj;
        System.out.println(book);
    }
}
