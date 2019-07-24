package com.five;

import java.util.concurrent.FutureTask;

public class Main {
    public static void main(String[] args) throws Exception{
        MyThread a = new MyThread();
        MyThread b = new MyThread();
        FutureTask<String> task1 = new FutureTask<>(a);
        FutureTask<String> task2 = new FutureTask<>(b);
        new Thread(task1).start();
        new Thread(task2).start();
        System.out.println("A线程的返回结果："+ task1.get());
        System.out.println("B线程的返回结果："+ task2.get());
    }
}
