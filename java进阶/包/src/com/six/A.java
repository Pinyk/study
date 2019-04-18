package com.six;

public class A {
    private static A a = new A();
    private A(){
    }
    public void print(){
        System.out.println("nice");
    }
    public static A getInstance(){
        return a;
    }
}
