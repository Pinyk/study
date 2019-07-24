package com.seven;

public class Main {
    public static void main(String[] args) throws Exception{
        MyThread a = new MyThread();
        new Thread(a,"自己的线程对象").start();
        a.run();
    }
}
