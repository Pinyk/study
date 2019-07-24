package com.one;

public class Main {
    public static void main(String[] args) {
        MyThread a = new MyThread("线程1");
        MyThread b = new MyThread("线程2");
        MyThread c = new MyThread("线程3");
        a.start();
        b.start();
        c.start();
    }
}
