package com.eight;

public class Main {
    public static void main(String[] args) {
        MyThread a = new MyThread();
        Thread b = new Thread(a,"线程");
        b.start();
        a.stop();
    }
}
