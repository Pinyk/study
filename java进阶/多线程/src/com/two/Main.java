package com.two;

public class Main {
    public static void main(String[] args) {
        MyThread a = new MyThread("线程一");
        MyThread b = new MyThread("线程二");
        MyThread c = new MyThread("线程三");
        new Thread(a).start();
        new Thread(b).start();
        new Thread(c).start();
    }
}
