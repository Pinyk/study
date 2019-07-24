package com.six;

public class Main {
    public static void main(String[] args) {
        MyThread a = new MyThread();
        new Thread(a,"自己的线程A").start();
        new Thread(a).start();
        new Thread(a,"自己的线程B").start();
        new Thread(a).start();
        new Thread(a).start();
    }
}
